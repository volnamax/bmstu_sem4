PUBLIC SHex

EXTRN N : WORD

Code SEGMENT PARA PUBLIC 'CODE'
	ASSUME CS:Code
		
SHex PROC NEAR
	mov dx, N ; 
    mov di, dx
    mov cl, 4
    mov si, 4
    test dx, dx ;Если (dx) не равно нулю, 
    jns skip ; если не отрицательное

	neg di ; меняем знак если отриц 
	mov dl, '-'
	mov ah, 2; вывод знака
	int 21h 
	skip:
    output_loop:
        dec si  
        mov dx, di
        xor bx, bx
        mov bl, dh

        shl bx, cl ; сдвигаем на бита влева  
        shl dx, cl ;

        mov di, dx ; теперь di содержит число в 16
        mov dl, bh
        cmp dl, 9

        jbe plus10 ; прыгаем если меньше или равно 
        jmp plusA 
        outpp:
            mov ah, 2
            int 21h ;вывод
            cmp si, 0
            jne output_loop 
            ret
    plus10:
        add dl, '0'
        jmp outpp
    plusA:
        sub dl, 10
        add dl, 'A'
        jmp outpp
	ret
SHex ENDP
		
Code ENDS
    END