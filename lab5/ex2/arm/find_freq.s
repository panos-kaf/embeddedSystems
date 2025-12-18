.section .text
.global _start

_start:

@ open /dev/ttyAMA0
    ldr r0, =tty
    ldr r1, =0x2      @ O_RDWR | O_NOCTTY
    mov r2, #0
    mov r7, #5          @ sys_open
    svc #0

    mov r10, r0         @ save fd

@ apply settings (TCSETS)
    mov r0, r10         @ fd
    ldr r1, =0x5402     @ TCSETS
    ldr r2, =options    @ pointer to termios struct
    mov r7, #54         @ sys_ioctl
    svc #0

@ flush previous input
    mov r0, r10         @ fd
    ldr r1, =0x540B     @ TCFLSH command
    mov r2, #0          @ TCIFLUSH (0 = Flush Input, 1 = Output, 2 = Both)
    mov r7, #54         @ sys_ioctl
    svc #0

@ read from file
    mov r0, r10
    ldr r1, =buffer
    mov r2, #64
    mov r7, #3
    svc #0

@ r0 = buffer index
@ r1 = buffer pointer

    ldr r3, =char_table

loop:
    cmp r0, #0
    beq exit_loop

    ldrb r2, [r1], #1
    ldrb r4, [r3, r2]
    add r4, r4, #1
    strb r4, [r3, r2]

    sub r0, r0, #1

    b loop

exit_loop:

    mov r5, #0  @ max
    mov r6, #0  @ most frequent char 

    mov r9, #127

    mov r8, #0          @ zero space char freq 
    strb r8, [r3, #32]

find_max:

    ldrb r4, [r3, r9]

    cmp r5, r4
    movlt r5, r4
    movlt r6, r9    @ save new char

    subs r9, r9, #1
    bge find_max


@ header (0xFF)
    mov r4, #0xFF

@ char 
    lsl r6, r6, #8
    orr r4, r4, r6

@ freq 
    lsl r5, r5, #16
    orr r4, r4, r5

    push {r4} 

@ write result
    mov r0, r10         @ fd
    mov r1, sp          @ buffer
    mov r2, #3          @ len = 3 bytes
    mov r7, #4          @ sys_write
    svc #0
    
    add sp, sp, #4      @ pop

exit_program:
    mov r0, #0
    mov r7, #1
    svc #0

.data
options: .word 0x00002b02 /* c_iflag */
.word 0x00000000 /* c_oflag */
.word 0x00004b00 /* c_cflag */
@.word 0x000005c3 /* c_lflag */
.word 0x00000002 /* c_lflag */
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

.section .bss
buffer: .skip 64
char: .skip 1
freq: .skip 1

.section .data

char_table:
.fill 128, 1, 0   @ 128 bytes of 0

msg1: .asciz "char: "
msg1_len = . - msg1

msg2: .asciz "freq: "
msg2_len = . - msg2

prompt: .asciz "hello from soudris HQ\n"
prompt_len = . - prompt

tty: .asciz "/dev/ttyAMA0"
