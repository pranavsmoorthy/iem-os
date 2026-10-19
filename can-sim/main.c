#include <signal.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#include <linux/can.h>
#include <linux/can/raw.h>
#include <net/if.h>
#include <sys/ioctl.h>
#include <sys/socket.h>

#include "can_1.h"

#define CAN_INTERFACE "vcan0"
#define CYCLE_PERIOD_MS 20

/**
    Ensures that program runs in a constant loop, volatile
    to ensure no unnecessary optimizations are made.
*/
static volatile sig_atomic_t g_running = 1;

static void sigint_handler(int signum) {
  (void)signum;
  g_running = 0;
}

int main(void) {
  // Trap termination signals so we can shut down
  // gracefully
  signal(SIGINT, sigint_handler);
  signal(SIGTERM, sigint_handler);

  // Local variables for SocketCAN communication
  int sock;
  struct ifreq ifr;
  struct sockaddr_can addr;
  struct can_frame frame;

  // IEM-specific unpacked signal struct
  struct can_1_safety_status signals;

  // Create a raw CAN socket
  sock = socket(PF_CAN, SOCK_RAW, CAN_RAW);
  if (sock < 0) {
    perror("Error opening CAN socket");
    return EXIT_FAILURE;
  }

  // Locate the numerical interface index for "vcan0"
  memset(&ifr, 0, sizeof(ifr));
  strncpy(ifr.ifr_name, CAN_INTERFACE, IFNAMSIZ - 1);
  if (ioctl(sock, SIOCGIFINDEX, &ifr) < 0) {
    perror("Error finding CAN interface");
    close(sock);
    return EXIT_FAILURE;
  }

  // Bind the socket to the interface
  memset(&addr, 0, sizeof(addr));
  addr.can_family = AF_CAN;
  addr.can_ifindex = ifr.ifr_ifindex;
  if (bind(sock, (struct sockaddr *)&addr, sizeof(addr)) < 0) {
    perror("Error binding CAN socket to interface");
    close(sock);
    return EXIT_FAILURE;
  }

  printf("Successfully bound to %s (interface index %d)\n", CAN_INTERFACE,
         ifr.ifr_ifindex);

  // Initialize the CAN frame metadata
  memset(&frame, 0, sizeof(frame));
  frame.can_id = CAN_1_SAFETY_STATUS_ID;
  if (CAN_1_SAFETY_STATUS_IS_EXT) {
    frame.can_id |= CAN_EFF_FLAG;
  }

  frame.can_dlc = CAN_1_SAFETY_STATUS_LENGTH;

  // Prepare high-precision timing baseline
  struct timespec next_wake;
  clock_gettime(CLOCK_MONOTONIC, &next_wake);
  long period_ns = (long)CYCLE_PERIOD_MS * 1000000L;

  // Simulated vehicle state variable
  float sim_voltage = 24.0f;
  printf("Starting CAN simulation loop on %s at %d ms period (Ctrl+C to "
         "stop)...\n",
         CAN_INTERFACE, CYCLE_PERIOD_MS);

  while (g_running) {
    // Populate IEM signal values in engineering units
    signals.car_state = 0; // LV_ON state
    signals.fault_bms = false;
    signals.fault_imd = false;
    signals.fault_bspd = false;
    signals.shutdown_state = true; // Shutdown circuit closed (OK)
    signals.brake_pressed = false;
    signals.vlt_lv_batt = sim_voltage; // Simulated battery voltage (Volts)
    signals.safety_hv_connected = false;
    signals.fault_apps = 0;
    signals.fault_btsf = 0;
    signals.bp_front = 0;    // Front brake pressure (psi)
    signals.bp_rear = 0;     // Rear brake pressure (psi)
    signals.cur_bspd = 0.0f; // BSPD current sensor (Amps)

    // Pack the physical values into the raw CAN frame payload
    if (can_1_safety_status_pack(frame.data, &signals, sizeof(frame.data)) !=
        0) {
      fprintf(stderr, "Warning: Failed to pack safety_status message\n");
    }

    // Transmit the CAN frame via SocketCAN
    ssize_t bytes_written = write(sock, &frame, sizeof(struct can_frame));
    if (bytes_written != sizeof(struct can_frame)) {
      perror("Error transmitting CAN frame");
      break;
    }

    // 4. Increment the simulated battery voltage (ramp between 24V and 28V)
    sim_voltage += 0.05f;
    if (sim_voltage > 28.0f) {
      sim_voltage = 24.0f;
    }
  }

  // Advance the target wake-up time by our cycle period (20 ms)
  next_wake.tv_nsec += period_ns;
  while (next_wake.tv_nsec >= 1000000000L) {
    next_wake.tv_sec += 1;
    next_wake.tv_nsec -= 1000000000L;
  }

  // Sleep until the absolute target timestamp
  clock_nanosleep(CLOCK_MONOTONIC, TIMER_ABSTIME, &next_wake, NULL);

  // Graceful teardown when g_running becomes 0
  printf("\nShutting down simulation. Closing socket...\n");
  close(sock);
  return EXIT_SUCCESS;
}