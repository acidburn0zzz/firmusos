#FirmusOS Makefile
#Giacomo Picchiarelli <gpicchiarelli@gmail.com>
# 

PROGRAM=firmusos.bin
BUILD=build/
CXX=g++ 
CFLAGS=-Wno-write-strings -ffreestanding -nostdlib -fno-rtti -fno-exceptions
ARCH32=-m32
SOURCES:=$(wildcard *.cpp)
OBJS:=$(SOURCES:.cpp=.o)
TARGET=$(BUILD)kernel.o 
LOADER32=$(BUILD)loader.o

#32bit
compile:
	$(CXX) $(CFLAGS) $(ARCH32) -c $(SOURCES)
	mv *.o $(BUILD)
	nasm -felf loader.asm -o $(LOADER32)
	ld -m elf_i386 -T link.ld -o $(BUILD)$(PROGRAM) $(BUILD)*.o
	qemu -kernel $(BUILD)$(PROGRAM)

isocd:
	mkdir -p $(BUILD)isodir
	mkdir -p $(BUILD)isodir/boot
	cp $(BUILD)$(PROGRAM) $(BUILD)isodir/boot/$(PROGRAM)
	mkdir -p $(BUILD)isodir/boot/grub
	cp templates/grub.cfg $(BUILD)isodir/boot/grub/grub.cfg
	grub-mkrescue -o $(BUILD)os.iso $(BUILD)isodir
	rm -R $(BUILD)isodir
	qemu -cdrom $(BUILD)os.iso

clean:
	rm -f build/*.*