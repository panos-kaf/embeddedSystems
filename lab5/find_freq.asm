

.data
    options: .word 0x00002b02 /* c_iflag */
        .word 0x00000003 /* c_oflag */
        .word 0x00004b00 /* c_cflag */
        .word 0x000005cb /* c_lflag */
        .byte 0x00 /* c_line */
        .word 0x157F1C03 /* c_cc[0-3] */
        .word 0x00010004 /* c_cc[4-7] */
        .word 0x00000000 /* c_cc[8-11] */
        .word 0x00000000 /* c_cc[12-15] */
        .word 0x00000000 /* c_cc[16-19] */
        .word 0x00000000 /* c_cc[20-23] */
        .word 0x00000000 /* c_cc[24-27] */
        .word 0x00000000 /* c_cc[28-31] */
        .byte 0x00 /* padding */
        .hword 0x0000 /* padding */
        .word 0x00002580 /* c_ispeed */
        .word 0x00002580 /* c_ospeed */
