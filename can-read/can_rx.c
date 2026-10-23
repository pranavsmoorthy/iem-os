#include "can_read/can_rx.h"

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <sys/time.h>
#include <net/if.h>
#include <linux/can.h>
#include <linux/can/raw.h>

static int g_sock = -1;
static CANBus_e g_bus = CAN_1;

void can_rx_set_bus(CANBus_e bus) {
    g_bus = bus;
}

CANBus_e can_rx_get_bus(void) {
    return g_bus;
}

/**
 * Create a new socket to read
 */
bool can_rx_init(const char *iface_name, CANBus_e bus) {
    g_bus = bus;
    // Check if the interface name is not null
    if (iface_name == NULL) {
        return false;
    }

    // Open the socket, make sure the socket is actually
    // opened
    g_sock = socket(PF_CAN, SOCK_RAW, CAN_RAW);
    if (g_sock < 0) {
        perror("can_rx: Error opening CAN socket");
        return false;
    }

    // Locate the CAN interface
    struct ifreq ifr;
    memset(&ifr, 0, sizeof(ifr));
    strncpy(ifr.ifr_name, iface_name, IFNAMSIZ - 1);
    if (ioctl(g_sock, SIOCGIFINDEX, &ifr) < 0) {
        perror("can_rx: Error locating CAN interface");
        close(g_sock);
        g_sock = -1;
        return false;
    }

    // Set the timeout
    struct timeval tv = {
        .tv_sec = 0,
        .tv_usec = 100000 // 100 ms timeout
    };
    if (setsockopt(g_sock, SOL_SOCKET, SO_RCVTIMEO, &tv, sizeof(tv)) < 0) {
        perror("can_rx: Error setting receive timeout");
        close(g_sock);
        g_sock = -1;
        return false;
    }

    // Bind the socket to the interface
    struct sockaddr_can addr;
    memset(&addr, 0, sizeof(addr));
    addr.can_family = AF_CAN;
    addr.can_ifindex = ifr.ifr_ifindex;
    if (bind(g_sock, (struct sockaddr *)&addr, sizeof(addr)) < 0) {
        perror("can_rx: Error binding socket to interface");
        close(g_sock);
        g_sock = -1;
        return false;
    }

    return true;
}

/**
 * Read off the kernel input buffer and translate the CAN 
 * frame into a CANMsg_t struct
 */
CanRxStatus_e can_rx_recv(CANMsg_t *out_msg) {
    // Return an error if the socket is not there or the 
    // message is null
    if (g_sock < 0 || out_msg == NULL) {
        return CAN_RX_ERROR;
    }

    // Allocate space for the CAN frame and then populate 
    // it
    struct can_frame frame;
    ssize_t bytes_read = read(g_sock, &frame, sizeof(struct can_frame));

    // If the bytes read come up as negative, the handle it 
    // accordingly. 
    if (bytes_read < 0) {
        if (errno == EAGAIN || errno == EWOULDBLOCK || errno == EINTR) {
            return CAN_RX_TIMEOUT;
        }
        perror("can_rx: Error reading from socket");
        return CAN_RX_ERROR;
    }

    // If the bytes read are not the size of the CAN frame 
    // throw an error
    if (bytes_read != sizeof(struct can_frame)) {
        return CAN_RX_ERROR;
    }

    // Populate the CANMsg_t with 0s
    memset(out_msg, 0, sizeof(CANMsg_t));

    // Populate the CANMsg_t with the information in the 
    // frame read.
    if (frame.can_id & CAN_EFF_FLAG) {
        out_msg->is_ext = true;
        out_msg->id = frame.can_id & CAN_EFF_MASK;
    } else {
        out_msg->is_ext = false;
        out_msg->id = frame.can_id & CAN_SFF_MASK;
    }

    out_msg->length = frame.can_dlc;
    out_msg->bus = g_bus;

    uint8_t copy_len = (frame.can_dlc > CAN_LIB_CAN_CLASSIC_DATA_MAX)
                           ? CAN_LIB_CAN_CLASSIC_DATA_MAX
                           : frame.can_dlc;
    memcpy(out_msg->data, frame.data, copy_len);

    return CAN_RX_OK;
}

// Close the socket
void can_rx_deinit(void) {
    if (g_sock >= 0) {
        close(g_sock);
        g_sock = -1;
    }
}
