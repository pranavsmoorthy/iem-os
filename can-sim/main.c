#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <signal.h>
#include <time.h>
#include <string.h>

#include "can/can_types.h"
#include "can/can_lib.h"
#include "can_1.h"

#define CAN_INTERFACE "vcan0"

// Flag to keep the simulation loop running until interrupted
static volatile sig_atomic_t g_running = 1;

// Handles Ctrl+C (SIGINT) and SIGTERM for graceful exit
static void sigint_handler(int signum) {
    (void)signum;
    g_running = 0;
}

// Generates a random float within a specified [min, max] range
static float rand_float(float min, float max) {
    if (min >= max) {
        return min;
    }
    float scale = (float)rand() / (float)RAND_MAX;
    return min + scale * (max - min);
}

// Generates a random unsigned integer within a specified [min, max] range
static uint32_t rand_uint(uint32_t min, uint32_t max) {
    if (min >= max) {
        return min;
    }
    return min + (uint32_t)(rand() % (max - min + 1));
}

// Helper to prompt the user for an integer with a default fallback
static int prompt_int(const char* label, int default_val) {
    char buffer[64];
    printf("%s [%d]: ", label, default_val);
    if (fgets(buffer, sizeof(buffer), stdin) != NULL && buffer[0] != '\n') {
        int val;
        if (sscanf(buffer, "%d", &val) == 1) {
            return val;
        }
    }
    return default_val;
}

// Helper to prompt the user for a float with a default fallback
static float prompt_float(const char* label, float default_val) {
    char buffer[64];
    printf("%s [%.1f]: ", label, default_val);
    if (fgets(buffer, sizeof(buffer), stdin) != NULL && buffer[0] != '\n') {
        float val;
        if (sscanf(buffer, "%f", &val) == 1) {
            return val;
        }
    }
    return default_val;
}

int main(void) {
    // Intercept termination signals
    signal(SIGINT, sigint_handler);
    signal(SIGTERM, sigint_handler);

    // Seed the pseudo-random number generator
    srand((unsigned int)time(NULL));

    printf("=========================================\n");
    printf("     IEM CAN Message Simulation Setup    \n");
    printf("=========================================\n");

    // 1. Configure the broadcast period
    int period_ms = prompt_int("Enter broadcast period in ms", 20);
    if (period_ms <= 0) {
        period_ms = 20;
    }

    // 2. Configure numeric ranges for signals
    printf("\n-- Battery Voltage Configuration (Volts) --\n");
    float vlt_min = prompt_float("Enter MIN low-voltage battery voltage", 22.0f);
    float vlt_max = prompt_float("Enter MAX low-voltage battery voltage", 26.0f);
    if (vlt_min > vlt_max) {
        float temp = vlt_min;
        vlt_min = vlt_max;
        vlt_max = temp;
    }

    printf("\n-- Brake Pressure Configuration (psi) --\n");
    int bp_min = prompt_int("Enter MIN brake pressure", 0);
    int bp_max = prompt_int("Enter MAX brake pressure", 600);
    if (bp_min > bp_max) {
        int temp = bp_min;
        bp_min = bp_max;
        bp_max = temp;
    }

    printf("\n-- Current Sensor Configuration (Amps) --\n");
    float cur_min = prompt_float("Enter MIN current reading", -10.0f);
    float cur_max = prompt_float("Enter MAX current reading", 50.0f);
    if (cur_min > cur_max) {
        float temp = cur_min;
        cur_min = cur_max;
        cur_max = temp;
    }

    printf("\nConfiguration Summary:\n");
    printf("  Interface:        %s\n", CAN_INTERFACE);
    printf("  Period:           %d ms (%.1f Hz)\n", period_ms, 1000.0f / (float)period_ms);
    printf("  Battery Range:    [%.2f V, %.2f V]\n", vlt_min, vlt_max);
    printf("  Brake Pres Range: [%d psi, %d psi]\n", bp_min, bp_max);
    printf("  Current Range:    [%.2f A, %.2f A]\n", cur_min, cur_max);
    printf("=========================================\n\n");

    // Initialize the CAN transport layer (SocketCAN)
    if (!can_lib_init(CAN_INTERFACE)) {
        fprintf(stderr, "Failed to initialize CAN interface %s\n", CAN_INTERFACE);
        return EXIT_FAILURE;
    }

    // Baseline timestamp for high-precision loop timing
    struct timespec next_wake;
    clock_gettime(CLOCK_MONOTONIC, &next_wake);
    long period_ns = (long)period_ms * 1000000L;

    printf("Simulation running");

    while (g_running) {
        // Initialize the IEM message envelope
        CANMsg_t msg = {
            .id     = CAN_1_SAFETY_STATUS_ID,
            .length = CAN_1_SAFETY_STATUS_LENGTH,
            .bus    = CAN_1,
            .is_ext = CAN_1_SAFETY_STATUS_IS_EXT
        };

        // Populate signals with randomized values constrained to user ranges
        struct can_1_safety_status signals = {
            .car_state           = rand_uint(0, 4),                 // Random car state
            .fault_bms           = (rand() % 100) < 5,              // 5% chance of fault
            .fault_imd           = (rand() % 100) < 5,
            .fault_bspd          = (rand() % 100) < 5,
            .shutdown_state      = (rand() % 100) >= 5,             // 95% chance OK
            .brake_pressed       = (rand() % 100) < 30,             // 30% chance pressed
            .vlt_lv_batt         = rand_float(vlt_min, vlt_max),    // User-configured range
            .safety_hv_connected = (rand() % 100) < 50,
            .fault_apps          = (rand() % 100) < 5 ? 1 : 0,
            .fault_btsf          = (rand() % 100) < 5 ? 1 : 0,
            .bp_front            = rand_uint((uint32_t)bp_min, (uint32_t)bp_max),
            .bp_rear             = rand_uint((uint32_t)bp_min, (uint32_t)bp_max),
            .cur_bspd            = rand_float(cur_min, cur_max)
        };

        // Pack physical values into the message envelope's payload
        if (can_1_safety_status_pack(msg.data, &signals, sizeof(msg.data)) != 0) {
            fprintf(stderr, "Warning: Failed to pack safety_status message\n");
        }

        // Transmit using IEM can_lib
        if (!can_lib_tx(&msg, 0)) {
            fprintf(stderr, "Warning: Failed to transmit CAN frame\n");
        }

        // Advance the target wake-up timestamp
        next_wake.tv_nsec += period_ns;
        while (next_wake.tv_nsec >= 1000000000L) {
            next_wake.tv_sec += 1;
            next_wake.tv_nsec -= 1000000000L;
        }

        // Sleep until the exact scheduled timestamp
        clock_nanosleep(CLOCK_MONOTONIC, TIMER_ABSTIME, &next_wake, NULL);
    }

    // Clean teardown upon exit
    printf("\nStopping simulation...\n");
    can_lib_deinit();

    return EXIT_SUCCESS;
}