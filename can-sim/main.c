#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <signal.h>
#include <time.h>

#include "can_sim/can_types.h"
#include "can_sim/can_lib.h"
#include "can_1.h"

#define CAN_INTERFACE     "vcan0"
#define CYCLE_PERIOD_MS   20       // 20 ms = 50 Hz

// Flag to keep the simulation loop running until interrupted
static volatile sig_atomic_t g_running = 1;

// Handles Ctrl+C (SIGINT) and SIGTERM for graceful exit
static void sigint_handler(int signum) {
    (void)signum;
    g_running = 0;
}

int main(void) {
    // Intercept termination signals
    signal(SIGINT, sigint_handler);
    signal(SIGTERM, sigint_handler);

    // Initialize the CAN transport layer 
    if (!can_lib_init(CAN_INTERFACE)) {
        fprintf(stderr, "Failed to initialize CAN interface %s\n", CAN_INTERFACE);
        return EXIT_FAILURE;
    }

    // Baseline timestamp for high-precision loop timing
    struct timespec next_wake;
    clock_gettime(CLOCK_MONOTONIC, &next_wake);
    long period_ns = (long)CYCLE_PERIOD_MS * 1000000L;

    // Simulated vehicle state
    float sim_voltage = 24.0f;

    printf("Starting IEM CAN simulation on %s at %d ms period (Ctrl+C to stop)...\n",
           CAN_INTERFACE, CYCLE_PERIOD_MS);

    while (g_running) {
        // Initialize the IEM message envelope
        CANMsg_t msg = {
            .id     = CAN_1_SAFETY_STATUS_ID,
            .length = CAN_1_SAFETY_STATUS_LENGTH,
            .bus    = CAN_1,
            .is_ext = CAN_1_SAFETY_STATUS_IS_EXT
        };

        // Populate physical values using designated initializers
        struct can_1_safety_status signals = {
            .car_state           = 0,            // LV_ON state
            .fault_bms           = false,
            .fault_imd           = false,
            .fault_bspd          = false,
            .shutdown_state      = true,         // Shutdown circuit closed (OK)
            .brake_pressed       = false,
            .vlt_lv_batt         = sim_voltage,  // Low-voltage battery reading (Volts)
            .safety_hv_connected = false,
            .fault_apps          = 0,
            .fault_btsf          = 0,
            .bp_front            = 0,            // Front brake pressure (psi)
            .bp_rear             = 0,            // Rear brake pressure (psi)
            .cur_bspd            = 0.0f          // Current sensor reading (Amps)
        };

        // Pack physical values into the message envelope's payload
        if (can_1_safety_status_pack(msg.data, &signals, sizeof(msg.data)) != 0) {
            fprintf(stderr, "Warning: Failed to pack safety_status message\n");
        }

        // Transmit using IEM can_lib
        if (!can_lib_tx(&msg, 0)) {
            fprintf(stderr, "Warning: Failed to transmit CAN frame\n");
        }

        // Advance simulation: ramp voltage between 24.0V and 28.0V
        sim_voltage += 0.05f;
        if (sim_voltage > 28.0f) {
            sim_voltage = 24.0f;
        }

        // Advance the target wake-up timestamp by 20 ms
        next_wake.tv_nsec += period_ns;
        while (next_wake.tv_nsec >= 1000000000L) {
            next_wake.tv_sec += 1;
            next_wake.tv_nsec -= 1000000000L;
        }

        // Sleep until the exact scheduled timestamp to prevent timing drift
        clock_nanosleep(CLOCK_MONOTONIC, TIMER_ABSTIME, &next_wake, NULL);
    }

    // Clean teardown upon exit
    printf("\nStopping simulation...\n");
    can_lib_deinit();

    return EXIT_SUCCESS;
}