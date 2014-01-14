# Makefile for nasm assembly code 
# FirmusOS
all:dummy_boot

dummy_boot:boot_dummy.asm
	nasm boot_dummy.asm -felf -o ../build/boot.bin

clean:
	rm -f boot.bin
	rm -f ../build/boot.bin
