CC ?= gcc

# Include search paths:
# -Iinclude: gives access to can_sim/can_lib.h, can_sim/can_types.h, and linux/
# -Iinclude/can_sim: allows can_lib.h to include can_types.h directly
# -Ican-sim/codec/can_1: gives access to can_1.h
CFLAGS ?= -Wall -Wextra -O2 -Iinclude -Iinclude/can_sim -Ican-sim/codec/can_1

TARGET = can_sim
BINDIR = bin
SRCS = can-sim/main.c \
       can-sim/can_lib.c \
       can-sim/codec/can_1/can_1.c

all: $(BINDIR)/$(TARGET)

$(BINDIR)/$(TARGET): $(SRCS)
	@mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) -o $(BINDIR)/$(TARGET) $(SRCS)

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

.PHONY: all clean vcan-up vcan-down