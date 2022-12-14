SHELL = /bin/bash
CFLAGS = -Wall -Werror -pedantic -Og
CC = gcc
TARGETS = add_int32 add_uint32 log2_s1 create_table log2_s2 set_duplicate_s1 set_duplicate_s2 set_duplicate_s3	\
		  bit_set_difference float_point byte_order show_bytes hex2dd dd2hex hex2ch ch2hex

.PHONY: all clean

all: $(TARGETS)

add_int32: add_int32.c
	@$(CC) $(CFLAGS) -std=c2x -fwrapv -E $^ | grep -ve '^#' | indent --linux-style -o $@.i
	@$(CC) $(CFLAGS) -std=c2x -fwrapv -S $^ -o $@.s
	@$(CC) $(CFLAGS) -std=c2x -fwrapv -c $^ -o $@.o
	$(CC) $(CFLAGS) -std=c2x -fwrapv $^ -o $@

add_uint32: add_uint32.c
	@$(CC) $(CFLAGS) -std=c2x -E $^ | grep -ve '^#' | indent --linux-style -o $@.i
	@$(CC) $(CFLAGS) -std=c2x -S $^ -o $@.s
	@$(CC) $(CFLAGS) -std=c2x -c $^ -o $@.o
	$(CC) $(CFLAGS) -std=c2x $^ -o $@

log2_s1: log2_s1.c
	@$(CC) $(CFLAGS) -std=c11 -E $^ | grep -ve '^#' | indent --linux-style -o $@.i
	@$(CC) $(CFLAGS) -std=c11 -S $^ -o $@.s
	@$(CC) $(CFLAGS) -std=c11 -c $^ -o $@.o
	$(CC) $(CFLAGS) -std=c11 $^ -o $@

create_table: create_table.c
	@$(CC) $(CFLAGS) -std=c11 -E $^ -lm | grep -ve '^#' | indent --linux-style -o $@.i
	@$(CC) $(CFLAGS) -std=c11 -S $^ -lm -o $@.s
	@$(CC) $(CFLAGS) -std=c11 -c $^ -lm -o $@.o
	$(CC) $(CFLAGS) -std=c11 $^ -lm -o $@

log2_s2: log2_s2.c
	@$(CC) $(CFLAGS) -std=c11 -E $^ | grep -ve '^#' | indent --linux-style -o $@.i
	@$(CC) $(CFLAGS) -std=c11 -S $^ -o $@.s
	@$(CC) $(CFLAGS) -std=c11 -c $^ -o $@.o
	$(CC) $(CFLAGS) -std=c11 $^ -o $@

set_duplicate_s1: set_duplicate_s1.c
	@$(CC) $(CFLAGS) -std=c11 -E $^ | grep -ve '^#' | indent --linux-style -o $@.i
	@$(CC) $(CFLAGS) -std=c11 -S $^ -o $@.s
	@$(CC) $(CFLAGS) -std=c11 -c $^ -o $@.o
	$(CC) $(CFLAGS) -std=c11 $^ -o $@

set_duplicate_s2: set_duplicate_s2.c
	@$(CC) $(CFLAGS) -std=c11 -E $^ | grep -ve '^#' | indent --linux-style -o $@.i
	@$(CC) $(CFLAGS) -std=c11 -S $^ -o $@.s
	@$(CC) $(CFLAGS) -std=c11 -c $^ -o $@.o
	$(CC) $(CFLAGS) -std=c11 $^ -o $@

set_duplicate_s3: set_duplicate_s3.c
	@$(CC) $(CFLAGS) -std=c11 -E $^ | grep -ve '^#' | indent --linux-style -o $@.i
	@$(CC) $(CFLAGS) -std=c11 -S $^ -o $@.s
	@$(CC) $(CFLAGS) -std=c11 -c $^ -o $@.o
	$(CC) $(CFLAGS) -std=c11 $^ -o $@

bit_set_difference: bit_set_difference.c
	@$(CC) $(CFLAGS) -std=c11 -E $^ | grep -ve '^#' | indent --linux-style -o $@.i
	@$(CC) $(CFLAGS) -std=c11 -S $^ -o $@.s
	@$(CC) $(CFLAGS) -std=c11 -c $^ -o $@.o
	$(CC) $(CFLAGS) -std=c11 $^ -o $@

float_point: float_point.c
	@$(CC) $(CFLAGS) -std=c11 -E $^ | grep -ve '^#' | indent --linux-style -o $@.i
	@$(CC) $(CFLAGS) -std=c11 -S $^ -o $@.s
	@$(CC) $(CFLAGS) -std=c11 -c $^ -o $@.o
	$(CC) $(CFLAGS) -std=c11 $^ -o $@

byte_order: byte_order.c
	@$(CC) $(CFLAGS) -std=c11 -E $^ | grep -ve '^#' | indent --linux-style -o $@.i
	@$(CC) $(CFLAGS) -std=c11 -S $^ -o $@.s
	@$(CC) $(CFLAGS) -std=c11 -c $^ -o $@.o
	$(CC) $(CFLAGS) -std=c11 $^ -o $@

show_bytes: show_bytes.c
	@$(CC) $(CFLAGS) -std=c11 -E $^ | grep -ve '^#' | indent --linux-style -o $@.i
	@$(CC) $(CFLAGS) -std=c11 -S $^ -o $@.s
	@$(CC) $(CFLAGS) -std=c11 -c $^ -o $@.o
	$(CC) $(CFLAGS) -std=c11 $^ -o $@

hex2dd: hex2dd.c
	@$(CC) $(CFLAGS) -std=c11 -E $^ | grep -ve '^#' | indent --linux-style -o $@.i
	@$(CC) $(CFLAGS) -std=c11 -S $^ -o $@.s
	@$(CC) $(CFLAGS) -std=c11 -c $^ -o $@.o
	$(CC) $(CFLAGS) -std=c11 $^ -o $@

dd2hex: dd2hex.c
	@$(CC) $(CFLAGS) -std=c11 -E $^ | grep -ve '^#' | indent --linux-style -o $@.i
	@$(CC) $(CFLAGS) -std=c11 -S $^ -o $@.s
	@$(CC) $(CFLAGS) -std=c11 -c $^ -o $@.o
	$(CC) $(CFLAGS) -std=c11 $^ -o $@

hex2ch: hex2ch.c
	@$(CC) $(CFLAGS) -std=c11 -D_DEFAULT_SOURCE -E $^ | grep -ve '^#' | indent --linux-style -o $@.i
	@$(CC) $(CFLAGS) -std=c11 -D_DEFAULT_SOURCE -S $^ -o $@.s
	@$(CC) $(CFLAGS) -std=c11 -D_DEFAULT_SOURCE -c $^ -o $@.o
	$(CC) $(CFLAGS) -std=c11 -D_DEFAULT_SOURCE $^ -o $@

ch2hex: ch2hex.c
	@$(CC) $(CFLAGS) -std=c11 -D_DEFAULT_SOURCE -E $^ | grep -ve '^#' | indent --linux-style -o $@.i
	@$(CC) $(CFLAGS) -std=c11 -D_DEFAULT_SOURCE -S $^ -o $@.s
	@$(CC) $(CFLAGS) -std=c11 -D_DEFAULT_SOURCE -c $^ -o $@.o
	$(CC) $(CFLAGS) -std=c11 -D_DEFAULT_SOURCE $^ -o $@

clean:
	rm -rvf *.i *.s *.o $(TARGETS)
