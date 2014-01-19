;loader.asm

[BITS 32]

[global start]
[extern_main]

start:
call_main
cli
hlt