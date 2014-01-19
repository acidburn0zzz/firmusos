OUTPUT_FORMAT("binary")
ENTRY(start)
SECTIONS{
. = 0x7c00;

.text :{
    *(.text)
}

.rodata ALIGN (0x1000) : {
    *(.rodata)
}

.data ALIGN (0x1000) : {
    *(.data)
}

.bss : {
    sbss = .;
    *(COMMON)
    *(.bss)
    ebss = .;
}
}