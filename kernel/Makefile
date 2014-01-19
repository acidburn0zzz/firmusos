#FirmusOS Makefile
PROGRAM=kernel-firmus
BUILD=build/
CC=g++ 
CFLAGS=-Wno-write-strings -ffreestanding -nostdlib -fno-builtin -fno-rtti -fno-exceptions -O2
ARCH32=-m32
SOURCES:=$(wildcard *.cpp)
TARGET=$(BUILD)kernel.o 
LOADER32=$(BUILD)loader.o
#32bit
all:
	$(CC) $(CFLAGS) $(ARCH32) $(SOURCES) -o $(TARGET)	
	nasm -f aout loader.asm -o $(LOADER32)
	ld -m elf_i386 -T link.ld -o build/kernel.bin $(TARGET) $(LOADER32)
	qemu build/kernel.bin

clean:
	rm -f build/*.o
	rm -f build/*.bin