CC ?= gcc

# Include search paths:
# -Iinclude: gives access to can_types.h, can_sim/can_lib.h, can_read/..., and linux/
# -Icodec/can_1: gives access to can_1.h
CFLAGS ?= -Wall -Wextra -O2 -Iinclude -Icodec/can_1 -Icodec/can_2 -Icodec/can_3

BINDIR = bin

CAN_SIM_TARGET = $(BINDIR)/can_sim
CAN_SIM_SRCS   = can-sim/main.c \
                 can-sim/can_lib.c \
                 codec/can_1/can_1.c

CAN_READ_TARGET = $(BINDIR)/can_read
CAN_READ_SRCS   = can-read/main.c \
                  can-read/can_rx.c \
                  can-read/decoder.c \
                  can-read/metrics.c \
                  codec/can_1/can_1.c \
                  codec/can_2/can_2.c \
                  codec/can_3/can_3.c

all: can_sim can_read

can_sim: $(CAN_SIM_TARGET)

$(CAN_SIM_TARGET): $(CAN_SIM_SRCS)
	@mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) -o $(CAN_SIM_TARGET) $(CAN_SIM_SRCS)

can_read: $(CAN_READ_TARGET)

$(CAN_READ_TARGET): $(CAN_READ_SRCS)
	@mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) -o $(CAN_READ_TARGET) $(CAN_READ_SRCS)

# Bring up virtual CAN
vcan-up:
	sudo modprobe vcan
	sudo ip link add dev vcan0 type vcan 2>/dev/null || true
	sudo ip link set up vcan0
	@echo "vcan0 is UP"

# Tear down virtual CAN
vcan-down:
	sudo ip link delete dev vcan0 2>/dev/null || true
	@echo "vcan0 is DOWN"

clean:
	rm -rf $(BINDIR)

.PHONY: all can_sim can_read clean vcan-up vcan-down