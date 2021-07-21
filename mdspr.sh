#!/system/bin/sh
busybox devmem 0x04020014 32 $1
busybox devmem 0x04020010 32 1
busybox devmem 0x04020018