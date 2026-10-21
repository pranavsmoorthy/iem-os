#include "can_read/metrics.h"

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <time.h>

#define ANSI_RESET   "\033[0m"
#define ANSI_RED     "\033[1;31m"
#define ANSI_GREEN   "\033[1;32m"

typedef struct {
    uint64_t total_frames;
    uint64_t valid_decoded_frames;
    uint64_t unrecognized_frames;
    uint64_t fault_frames;
    struct timespec start_time;
} MetricsState_t;

static MetricsState_t g_metrics = {0};

/**
 * Initialize all the recorded metrics to zero, and record
 * the starting timestamp
 */
void metrics_init(void) {
    g_metrics.total_frames = 0;
    g_metrics.valid_decoded_frames = 0;
    g_metrics.unrecognized_frames = 0;
    g_metrics.fault_frames = 0;
    clock_gettime(CLOCK_MONOTONIC, &g_metrics.start_time);
}

/**
 * Increment running totals
 */
void metrics_record_frame(bool is_recognized, bool has_fault) {
    g_metrics.total_frames++;

    if (is_recognized) {
        g_metrics.valid_decoded_frames++;
    } else {
        g_metrics.unrecognized_frames++;
    }

    if (has_fault) {
        g_metrics.fault_frames++;
    }
}

/**
 * Print out the metrics
 */
void metrics_print_summary(void) {
    struct timespec end_time;
    clock_gettime(CLOCK_MONOTONIC, &end_time);

    double elapsed_sec = (double)(end_time.tv_sec - g_metrics.start_time.tv_sec) +
                         (double)(end_time.tv_nsec - g_metrics.start_time.tv_nsec) / 1e9;

    double frame_rate_hz = 0.0;
    if (elapsed_sec > 0.0001) {
        frame_rate_hz = (double)g_metrics.total_frames / elapsed_sec;
    }

    printf("\n=================== CAN READ SESSION SUMMARY ===================\n");
    printf("  Elapsed Time:          %.2f s\n", elapsed_sec);
    printf("  Total Frames Received: %llu\n", (unsigned long long)g_metrics.total_frames);
    printf("  Valid Decoded Frames:  %llu\n", (unsigned long long)g_metrics.valid_decoded_frames);
    printf("  Unrecognized Frames:   %llu\n", (unsigned long long)g_metrics.unrecognized_frames);
    printf("  Average Frame Rate:    %.1f Hz\n", frame_rate_hz);
    if (g_metrics.fault_frames > 0) {
        printf("  Total Fault Frames:    " ANSI_RED "%llu" ANSI_RESET "\n", (unsigned long long)g_metrics.fault_frames);
    } else {
        printf("  Total Fault Frames:    " ANSI_GREEN "%llu" ANSI_RESET "\n", (unsigned long long)g_metrics.fault_frames);
    }
    printf("================================================================\n");
}
