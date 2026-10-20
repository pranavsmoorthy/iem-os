#ifndef can_lib_H
#define can_lib_H

#include <stdbool.h>
#include <stdint.h>
#include "can_types.h"

/**
 * Initializes the CAN transport layer given the interface 
 * name. Returns true on success.
 */
bool can_lib_init(const char* iface_name);

/**
 * Transmits a CANMsg_t over the CAN bus with a block time
 */
bool can_lib_tx(const CANMsg_t* msg, uint32_t block_time);

/**
 * Closes and cleans up the CAN interface
 */
void can_lib_deinit(void);

#endif /* can_lib_H */