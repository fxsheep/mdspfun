hexagon-gcc memory_server.c -o memory_server.o -fpic -nostdlib
hexagon-objcopy -O binary memory_server.o memory_server.bin
