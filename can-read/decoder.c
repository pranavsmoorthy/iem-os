#include "can_read/decoder.h"

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include "can_1.h"

// Set colors for the text
#define ANSI_RESET   "\033[0m"
#define ANSI_GREEN   "\033[1;32m"
#define ANSI_RED     "\033[1;31m"
#define ANSI_BG_RED  "\033[41;1;37m"

/**
 * Get string based on the car state
*/
static const char *car_state_to_str(uint32_t state) {
    switch (state) {
        case 0: return "IDLE";
        case 1: return "PRECHARGE";
        case 2: return "READY_TO_DRIVE";
        case 3: return "DRIVE";
        case 4: return "FAULT";
        default: return "UNKNOWN";
    }
}

/**
 * Calls appropriate DBC unpacker based on the message ID
 */
DecoderResult_t decoder_process_frame(const CANMsg_t *msg) {
    // Define the result
    DecoderResult_t result = {
        .is_recognized = false,
        .has_fault = false
    };

    // Return the default result if the message is null
    if (msg == NULL) {
        return result;
    }

    // Check cases based on the CAN IDs
    switch (msg->id) {
        case CAN_1_SAFETY_STATUS_ID: {
            // Set the recognized field to true
            result.is_recognized = true;

            // Unpack the incoming message
            struct can_1_safety_status status;
            if (can_1_safety_status_unpack(&status, msg->data, msg->length) != 0) {
                fprintf(stderr, "decoder: Warning: Failed to unpack safety_status frame\n");
                return result;
            }

            // Check whether the incoming frame shows a 
            // fault
            bool fault_active = status.fault_bms ||
                                status.fault_imd ||
                                status.fault_bspd ||
                                (status.fault_apps != 0) ||
                                (status.fault_btsf != 0);

            result.has_fault = fault_active;

            // Print result based on whether there is a 
            // fault or not
            if (fault_active) {
                printf(ANSI_BG_RED " [! FAULT ACTIVE !] " ANSI_RESET " "
                       ANSI_RED "[SAFETY_STATUS 0x%03X]" ANSI_RESET
                       " State: %-14s | Batt: %5.2f V | Cur: %6.2f A | BP(F/R): %3u / %3u psi | "
                       ANSI_RED "BMS:%d IMD:%d BSPD:%d APPS:%u BTSF:%u" ANSI_RESET "\n",
                       msg->id,
                       car_state_to_str(status.car_state),
                       status.vlt_lv_batt,
                       status.cur_bspd,
                       status.bp_front,
                       status.bp_rear,
                       status.fault_bms,
                       status.fault_imd,
                       status.fault_bspd,
                       status.fault_apps,
                       status.fault_btsf);
            } else {
                printf("[SAFETY_STATUS 0x%03X] State: %-14s | Batt: %5.2f V | Cur: %6.2f A | BP(F/R): %3u / %3u psi | "
                       ANSI_GREEN "FAULTS: NONE" ANSI_RESET "\n",
                       msg->id,
                       car_state_to_str(status.car_state),
                       status.vlt_lv_batt,
                       status.cur_bspd,
                       status.bp_front,
                       status.bp_rear);
            }
            break;
        }

        default:
            result.is_recognized = false;
            break;
    }

    return result;
}
