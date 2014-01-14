# Makefile for nasm assembly code 
# FirmusOS
all:dummy_boot

dummy_boot:boot_dummy.asm
	nasm boot_dummy.asm -felf bin -o boot.bin

clean:
	rm -f boot.bin
