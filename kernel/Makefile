#building kernel FirmusOS

COMPILER=gcc

all: kernel
	$(MAKE) -C asm

kernel: main.c
	$(COMPILER) -c main.c -o kernel.o -std=gnu99 -ffreestanding -O2 -Wall -Wextra

clean: 
	rm -f *.o
	$(MAKE) clean -C asm
