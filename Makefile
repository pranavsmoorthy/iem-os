CC ?= gcc
# -Ican-sim tells GCC where to find can_1.h
CFLAGS ?= -Wall -Wextra -O2 -Ican-sim

TARGET = can_sim
SRCS = can-sim/main.c can-sim/can_1.c

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o bin/$(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)

.PHONY: all clean