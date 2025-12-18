.section .text
.global _start

_start:

@print prompt msg
    mov r0, #1
    ldr r1, =prompt
    mov r2, #prompt_len
    mov r7, #4  @ write syscall
    svc #0

@ read from file
    mov r0, #0
    ldr r1, =buffer
    mov r2, #64
    mov r7, #3
    svc #0

    @ r0 = buffer index

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
    sub r9, r9, #1

    cmp r9, #0
    bne find_max

    ldr r1, =char
    strb r6, [r1]   @ store char
    ldr r1, =freq   
    strb r5, [r1]   @ store freq

@ print result
    mov r0, #1
    ldr r1, =char
    mov r2, #1
    mov r7, #4
    svc #0

    mov r0, #1
    ldr r1, =freq
    mov r2, #1
    mov r7, #4
    svc #0

@ exit program
    mov r0, #0
    mov r7, #1
    svc #0

.section .data
prompt: .asciz "enter text:\n"
prompt_len = . - prompt

char_table:
    .fill 128, 1, 0   @ 128 bytes of 0

.section .bss
buffer: .skip 64
char: .skip 1
freq: .skip 1
