CC = gcc
CFLAGS = -std=c89
INCLUDES = -I/usr/include

PROGRAMS = $(basename $(wildcard *.c))

# Note: don't include $(PROGRAMS) in .PHONY since they are built by an
# implicit rule, and will be exluded from the implicit rule search if
# they're added to .PHONY.
.PHONY: clean all

all: $(PROGRAMS)

% :: %.c
	$(CC) $(CFLAGS) $(INCLUDES) $< -o $@

clean:
	rm -f $(PROGRAMS)

