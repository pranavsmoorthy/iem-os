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
    printf("Usage: %s [interface]\n", prog_name);
    printf("  interface: CAN network interface (default: %s)\n", DEFAULT_CAN_INTERFACE);
    printf("Examples:\n");
    printf("  %s vcan0    # Virtual CAN testing\n", prog_name);
    printf("  %s can0     # Physical car bus\n", prog_name);
}

int main(int argc, char *argv[]) {
    // Initialize with the default CAN interface
    const char *iface = DEFAULT_CAN_INTERFACE;

    // If check if the arguments count is greater than 1, 
    // if the help flag is put in. If help is put in, put 
    // the usage details. Otherwise, check the CAN input 
    // passed in
    if (argc > 1) {
        if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0) {
            print_usage(argv[0]);
            return EXIT_SUCCESS;
        }
        iface = argv[1];
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

    // Try to initialize the CAN interface with the given
    if (!can_rx_init(iface)) {
        fprintf(stderr, "can_read: Failed to initialize CAN interface '%s'\n", iface);
        return EXIT_FAILURE;
    }

    printf("can_read: Listening on '%s'\n\n", iface);

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
