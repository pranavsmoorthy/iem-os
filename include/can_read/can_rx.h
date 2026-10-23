#ifndef CAN_RX_H
#define CAN_RX_H

#include <stdbool.h>
#include "can_types.h"

/**
 * Define the types of results the CAN reader can get
 */
typedef enum {
    CAN_RX_OK = 0,  // Successful read
    CAN_RX_TIMEOUT, // Timeout
    CAN_RX_ERROR    // Some error thrown
} CanRxStatus_e;

/**
 * Create a new socket to read from the specified interface and bus
 */
bool can_rx_init(const char *iface_name, CANBus_e bus);
void can_rx_set_bus(CANBus_e bus);
CANBus_e can_rx_get_bus(void);

/**
 * Read off the kernel input buffer and translate the CAN 
 * frame into a CANMsg_t struct
 */
CanRxStatus_e can_rx_recv(CANMsg_t *out_msg);

/**
 * Deactivate socket
 */
void can_rx_deinit(void);

#endif /* CAN_RX_H */
