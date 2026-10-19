#ifndef CAN_TYPES_H
#define CAN_TYPES_H

#include <stdint.h>
#include <stdbool.h>

#define CAN_LIB_CAN_CLASSIC_DATA_MAX 8U
#define CAN_LIB_CAN_FD_DATA_MAX      64U

typedef enum {
    CAN_1 = 0U,
    CAN_2,
    CAN_3,
    CAN_BUS_MAX,
} CANBus_e;

typedef struct {
    uint32_t id;
    uint8_t length;
    CANBus_e bus;
    bool is_ext;

    uint8_t data[CAN_LIB_CAN_FD_DATA_MAX];
} CANMsg_t;

#endif /* CAN_TYPES_H */