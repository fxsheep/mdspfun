/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (C) 2021 Sheep Sun
 */

OUTPUT_ARCH(hexagon)

SECTIONS {
	. = 0x86800000;
	.text : { *(.text) }
	.data : { *(.data) }
}
