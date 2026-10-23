#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <signal.h>
#include <string.h>

#include "can_types.h"
#include "can_read/can_rx.h"
#include "can_read/decoder.h"
#include "can_read/metrics.h"

// Define the default CAN interface as "vcan0"
#define DEFAULT_CAN_INTERFACE "vcan0"

static volatile sig_atomic_t g_running = 1;

static void signal_handler(int signum) {
    (void)signum;
    g_running = 0;
}

/**
 * Prints the usage details for the CAN reader
 */
static void print_usage(const char *prog_name) {
    printf("Usage: %s [interface] [bus]\n", prog_name);
    printf("  interface: CAN network interface (default: %s)\n", DEFAULT_CAN_INTERFACE);
    printf("  bus:       Optional CAN bus: 1, 2, 3, or all (default: auto-detected from interface)\n");
    printf("Examples:\n");
    printf("  %s vcan0        # Virtual CAN testing (auto-detects CAN_1)\n", prog_name);
    printf("  %s can0 1       # Physical car bus (CAN_1: Safety, BMS)\n", prog_name);
    printf("  %s can1 2       # Physical car bus (CAN_2: VNAV, TV, Sensors)\n", prog_name);
    printf("  %s can2 3       # Physical car bus (CAN_3: AMK Inverters)\n", prog_name);
    printf("  %s vcan0 all    # Decode frames across all codecs\n", prog_name);
}

int main(int argc, char *argv[]) {
    // Initialize with the default CAN interface
    const char *iface = DEFAULT_CAN_INTERFACE;

    // Check if the help flag is passed or interface is provided
    if (argc > 1) {
        if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0) {
            print_usage(argv[0]);
            return EXIT_SUCCESS;
        }
        iface = argv[1];
    }

    // Determine target CAN bus (auto-detect from interface name)
    CANBus_e bus = CAN_1;
    if (strstr(iface, "1") != NULL) {
        bus = CAN_2;
    } else if (strstr(iface, "2") != NULL) {
        bus = CAN_3;
    }

    // Explicit override if bus argument is passed
    if (argc > 2) {
        if (strcmp(argv[2], "1") == 0 || strcasecmp(argv[2], "can1") == 0) {
            bus = CAN_1;
        } else if (strcmp(argv[2], "2") == 0 || strcasecmp(argv[2], "can2") == 0) {
            bus = CAN_2;
        } else if (strcmp(argv[2], "3") == 0 || strcasecmp(argv[2], "can3") == 0) {
            bus = CAN_3;
        } else if (strcasecmp(argv[2], "all") == 0 || strcasecmp(argv[2], "any") == 0) {
            bus = CAN_BUS_MAX;
        } else {
            fprintf(stderr, "can_read: Unknown bus '%s'. Use 1, 2, 3, or all.\n", argv[2]);
            return EXIT_FAILURE;
        }
    }

    // Ensures SA_RESTART is not set, guaranteeing that if 
    // a signal arrives while read() is waiting, the 
    // system call will immediately return with 
    // errno == EINTR rather than auto-restarting, 
    // allowing the loop to break out instantly without 
    // hanging.
    struct sigaction sa;
    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = signal_handler;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = 0;

    // Check if signal handlers are properly configured
    if (sigaction(SIGINT, &sa, NULL) < 0 || sigaction(SIGTERM, &sa, NULL) < 0) {
        perror("can_read: Failed to configure signal handlers");
        return EXIT_FAILURE;
    }

    // Enable metrics
    metrics_init();

    // Try to initialize the CAN interface with the given bus
    if (!can_rx_init(iface, bus)) {
        fprintf(stderr, "can_read: Failed to initialize CAN interface '%s'\n", iface);
        return EXIT_FAILURE;
    }

    const char *bus_str = (bus == CAN_1) ? "CAN_1" :
                          (bus == CAN_2) ? "CAN_2" :
                          (bus == CAN_3) ? "CAN_3" : "ALL";
    printf("can_read: Listening on '%s' [Bus: %s] (press Ctrl+C to terminate)...\n\n", iface, bus_str);

    while (g_running) {
        CANMsg_t msg;

        // Recieve the CAN frame and pass in the 
        // preallocated message struct
        CanRxStatus_e rx_status = can_rx_recv(&msg);

        // Check if the message is OK or not
        if (rx_status == CAN_RX_OK) {
            // If OK, decode the frame, pass it to metrics
            DecoderResult_t res = decoder_process_frame(&msg);
            metrics_record_frame(res.is_recognized, res.has_fault);
        } else if (rx_status == CAN_RX_TIMEOUT) {
            // If TIMEOUT, continue like nothing happened
            continue;
        } else if (rx_status == CAN_RX_ERROR) {
            // If ERROR, break
            if (!g_running) {
                break;
            }
            fprintf(stderr, "can_read: Unrecoverable socket error encountered\n");
            break;
        }
    }

    printf("\ncan_read: Stopping reception and closing socket...\n");
    can_rx_deinit();
    metrics_print_summary();

    return EXIT_SUCCESS;
}
