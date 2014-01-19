[BITS 32]

global start
extern _main

start:
    call _main
    cli 
    hlt
