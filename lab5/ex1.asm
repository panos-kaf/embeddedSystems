.section .text
.global _start

_start:

@print prompt msg
	mov r0, #1
	ldr r1, =prompt
	mov r2, #prompt_len
	mov r7, #4	@ write syscall
	svc #0

@read input
	mov r0, #0
	ldr r1, =buffer
	mov r2, #32
	mov r7, #3 	@ read syscall
	svc #0

	mov r8, r0	@ save cnt
    ldr r1, =buffer
    subs r3, r0, #1
    ldrb r3, [r1, r3]
    cmp r3, #'\n'
    moveq r5, #1            @ newline already consumed

	ldr r1, =buffer
	bl convert

@print result txt
	mov r0, #1
	ldr r1, =result
	mov r2, #result_len
	mov r7, #4
	svc #0

@print output
	mov r0,	#1
	ldr r1, =buffer
	mov r2, r8
	mov r7, #4	@ write syscall
	svc #0

@newline
	mov r0, #1
	ldr r1, =newline
	mov r2, #1
	mov r7, #4
	svc #0

    cmp r5, #1
    beq no_flush

flush:          @ flush input
    mov r0, #0
    ldr r1, =buffer
    mov r2, #1
    mov r7, #3
    svc #0
    ldrb r3, [r1]
    cmp r3, #'\n'
    bne flush
no_flush:
    mov r5, #0

@clear buffer
	ldr r1, =buffer
	mov r0, #0          @ value to store
	mov r9, #32         @ byte count

clear_loop:
	strb r0, [r1], #1
	subs r9, r9, #1
	bne clear_loop

b _start

exit:
	mov r7, #1
	mov r0, #0
	svc #0

convert:

	ldrb r4, [r1]

	cmp r0, #2
	bgt loop
	cmp r4, #'q'
	beq exit
	cmp r4, #'Q'
	beq exit

loop:
	sub r0,r0,#1

	cmp r4, #'5'
	blt add_5

	cmp r4, #'9'
	ble sub_5

	cmp r4, #'Z'
	ble to_lowercase

	cmp r4, #'z'
	ble to_uppercase

next:
	strb r4, [r1]
	ldrb r4, [r1, #1]!
	cmp r0, #0
	bne loop
	bx lr		@ return

to_lowercase:
	cmp r4, #'A'
	addge r4, r4, #0x20
	b next

to_uppercase:
	cmp r4, #'a'
	subge r4, r4, #0x20
	b next

add_5:
	cmp r4, #'0'
	addge r4, r4, #5
	b next

sub_5:
	sub r4, r4, #5
	b next

.section .data
prompt:	.asciz "Enter input:\n"
prompt_len = . - prompt

result: .asciz "Result is:\n"
result_len = . - result

newline: .asciz "\n"

.section .bss
buffer: .skip 32
