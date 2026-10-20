#ifndef DECODER_H
#define DECODER_H

#include <stdbool.h>
#include "can_types.h"

/**
 * Struct for decoder result
 */
typedef struct {
    bool is_recognized; // If message has recognizable message ID
    bool has_fault;     // If message alerts a fault
} DecoderResult_t;

/**
 * Calls appropriate DBC unpacker based on the message ID
 */
DecoderResult_t decoder_process_frame(const CANMsg_t *msg);

#endif /* DECODER_H */
