CC ?= gcc
CFLAGS ?= -Wall -Wextra -O2 -I.

TARGET = can_sim
SRCS = main.c can_1.c

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)

.PHONY: all clean