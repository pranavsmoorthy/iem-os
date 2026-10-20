#ifndef METRICS_H
#define METRICS_H

#include <stdbool.h>
#include <stdint.h>

/**
 * Capture start timestamp
 */
void metrics_init(void);

/**
 * Increment running totals
 */
void metrics_record_frame(bool is_recognized, bool has_fault);

void metrics_print_summary(void);

#endif /* METRICS_H */
