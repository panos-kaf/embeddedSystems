.section .text
.global _start

_start:

@print prompt msg
    mov r0, #1
    ldr r1, =prompt
    mov r2, #prompt_len
    mov r7, #4      @ write syscall
    svc #0

@read input
    mov r0, #0
    ldr r1, =buffer
    mov r2, #32
    mov r7, #3      @ read syscall
    svc #0

    mov r8, r0  @ save cnt
    ldr r1, =buffer
    subs r3, r0, #1
    ldrb r3, [r1, r3]
    cmp r3, #'\n'
    moveq r5, #1        @ newline already consumed

    ldr r1, =buffer
    bl convert

@print result txt
    mov r0, #1
    ldr r1, =result
    mov r2, #result_len
    mov r7, #4
    svc #0

@print output
    mov r0, #1
    ldr r1, =buffer
    mov r2, r8
    mov r7, #4      @ write syscall
    svc #0

    cmp r5, #1      @ no need to flush if weve read \n
    beq no_flush

flush:              @ flush leftover input
    mov r0, #0
    ldr r1, =buffer
    mov r2, #1
    mov r7, #3
    svc #0
    ldrb r3, [r1]
    cmp r3, #'\n'
    bne flush

@ print a newline if it got flushed
    mov r0, #1
    ldr r1, =newline
    mov r2, #1
    mov r7, #4
    svc #0

no_flush:
    mov r5, #0

    b _start

exit:
    mov r7, #1
    mov r0, #0
    svc #0

convert:

    ldrb r4, [r1]

    cmp r0, #2
    bgt loop

    orr r6, r4, #0x20   @ lower case to make only 1 comparison
    cmp r6, #'q'
    beq exit

loop:
    sub r6, r4, #'0'
    cmp r6, #9
    bhi handle_letters

@ handle_nums
    add r4, r4, #5
    cmp r4, #'9'
    subgt r4, r4, #10
    b next

handle_letters:
    orr r6, r4, #0x20
    sub r6, r6, #'a'        @ r6 = 'lowercase r4'
    cmp r6, #25             @ see if r4 is a letter (compare r6 with z (z = 25))
    eorls r4, r4, #0x20     @ if r4 is a letter flip its case bit

next:
    strb r4, [r1]
    ldrb r4, [r1, #1]!
    subs r0, r0, #1
    bne loop
    bx lr                   @ return

.section .data
prompt: .asciz "Enter input:\n"
prompt_len = . - prompt

result: .asciz "Result is:\n"
result_len = . - result

newline: .asciz "\n"

.section .bss
buffer: .skip 32

