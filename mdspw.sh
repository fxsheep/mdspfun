#!/system/bin/sh
busybox devmem 0x04020014 32 $1
busybox devmem 0x04020018 32 $2
busybox devmem 0x04020010 32 2
