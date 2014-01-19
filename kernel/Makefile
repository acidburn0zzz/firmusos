#FirmusOS Makefile

CC=g++ 
PARM=-Wno-write-strings -ffreestanding -nostdlib -fno-builtin -fno-rtti -fno-exceptions
ARCH=-m32
OBJS=video.cpp main.cpp
TARGET=build/video.o build/main.o

default:
	$(CC) $(PARM) $(ARCH) -c $(OBJS) -o $(TARGET) 
	nasm -f aout loader.asm -o build/loader.o
	ld -m elf_i386 -T link.ld -o build/kernel.bin $(TARGET)

clean:
	rm -f build/*.o
	rm -f build/*.bin