CC ?= gcc

CFLAGS ?= -Wall -Wextra -O2 -Iinclude -Iinclude/can -Ican-sim/codec/can_1

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