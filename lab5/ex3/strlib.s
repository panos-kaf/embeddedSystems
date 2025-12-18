.text
.global strcpy /* όνομα συνάρτησης */
.type strcpy, %function

strcpy:
    @ r0 = &trg
    @ r1 = &src
    
    push {r0}

strcpy_loop:
    ldrb r2, [r1], #1
    cmp r2, #0
    strneb r2, [r0], #1
    bne strcpy_loop

    mov r2, #0
    strb r2, [r0]
    
    pop {r0}
    bx lr

@ - - - - -

.text
.global strcmp /* όνομα συνάρτησης */
.type strcmp, %function

strcmp:
    @ r0 = s1
    @ r1 = s2

    ldrb r2, [r0], #1
    ldrb r3, [r1], #1
    cmp r2, #0
    beq exit_strcmp
    cmp r2, r3
    beq strcmp

exit_strcmp:
    sub r0, r2, r3
    bx lr

@ - - - - -

.text
.global strcat /* όνομα συνάρτησης */
.type strcat, %function

strcat:
    @ r0 = trg
    @ r1 = src
    
    push {r0}

strcat_loop1:
    ldrb r2, [r0], #1
    cmp r2, #0
    bne strcat_loop1

    sub r0, r0, #1 @ go back to null char

strcat_loop2:
    ldrb r2, [r1], #1
    strb r2, [r0], #1
    cmp r2, #0
    bne strcat_loop2

    pop {r0}
    bx lr

@ - - - - -

.text
.global strlen /* όνομα συνάρτησης */
.type strlen, %function

strlen:
    @ r0 = str
    
    mov r1, #0

strlen_loop:
    ldrb r2, [r0], #1
    cmp r2, #0
    addne r1, r1, #1
    bne strlen_loop

    mov r0, r1
    bx lr
