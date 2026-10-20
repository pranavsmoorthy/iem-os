#include "can_sim/can_lib.h"

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <net/if.h>
#include <linux/can.h>
#include <linux/can/raw.h>

// Private socket file descriptor for SocketCAN
static int g_sock = -1;

// Initializes the CAN transport layer and binds to the 
// specified interface
bool can_lib_init(const char* iface_name) {
    if (iface_name == NULL) {
        return false;
    }

    // Create a raw CAN socket
    g_sock = socket(PF_CAN, SOCK_RAW, CAN_RAW);
    if (g_sock < 0) {
        perror("can_lib: Error opening CAN socket");
        return false;
    }

    // Find the interface index for the given name
    struct ifreq ifr;
    memset(&ifr, 0, sizeof(ifr));
    strncpy(ifr.ifr_name, iface_name, IFNAMSIZ - 1);
    if (ioctl(g_sock, SIOCGIFINDEX, &ifr) < 0) {
        perror("can_lib: Error finding CAN interface");
        close(g_sock);
        g_sock = -1;
        return false;
    }

    // Bind the socket to the resolved CAN interface
    struct sockaddr_can addr;
    memset(&addr, 0, sizeof(addr));
    addr.can_family = AF_CAN;
    addr.can_ifindex = ifr.ifr_ifindex;
    if (bind(g_sock, (struct sockaddr*)&addr, sizeof(addr)) < 0) {
        perror("can_lib: Error binding CAN socket to interface");
        close(g_sock);
        g_sock = -1;
        return false;
    }

    printf("can_lib: Bound to %s (interface index %d)\n", iface_name, ifr.ifr_ifindex);
    return true;
}

// Transmits an IEM CANMsg_t envelope over SocketCAN
bool can_lib_tx(const CANMsg_t* msg, uint32_t block_time) {
    (void)block_time; // Preserved for API parity with IEM firmware

    if (g_sock < 0 || msg == NULL) {
        return false;
    }

    // Convert IEM CANMsg_t to Linux struct can_frame
    struct can_frame frame;
    memset(&frame, 0, sizeof(frame));

    frame.can_id = msg->id;
    if (msg->is_ext) {
        frame.can_id |= CAN_EFF_FLAG;
    }

    frame.can_dlc = msg->length;

    // Guard against payloads larger than classic CAN limit
    uint8_t copy_len = (msg->length > CAN_LIB_CAN_CLASSIC_DATA_MAX)
                           ? CAN_LIB_CAN_CLASSIC_DATA_MAX
                           : msg->length;
    memcpy(frame.data, msg->data, copy_len);

    // Transmit the frame atomically to the Linux kernel
    ssize_t bytes_written = write(g_sock, &frame, sizeof(struct can_frame));
    return (bytes_written == sizeof(struct can_frame));
}

// Closes and cleans up the CAN socket
void can_lib_deinit(void) {
    if (g_sock >= 0) {
        close(g_sock);
        g_sock = -1;
        printf("can_lib: Closed CAN socket.\n");
    }
}
