PUBLIC UOct

EXTRN N : WORD

Code SEGMENT PARA PUBLIC 'CODE'
	ASSUME CS:Code
		
UOct PROC NEAR
    mov ax, N
    xor cx, cx 
    mov bx, 8 ; основание 

oi2:
    xor dx,dx
    div bx   ; Разделим значение в AX на значение в BX, частное в AX, остаток в DX

    push dx ; Push the remainder (DX) onto the stack
    inc cx

    test ax, ax
    jnz oi2 ;Если частное (AX) не равно нулю, перейти к метке oi2

    mov ah, 02h 
oi3:
    pop dx

    add dl, '0' ; перевод к числу 
    int 21h ; вывод числа 

    loop oi3
    
    ret
UOct ENDP
		
Code ENDS
    END