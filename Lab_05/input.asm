PUBLIC INPUT

EXTRN ENT : BYTE
EXTRN NLINE : BYTE

Code SEGMENT PARA PUBLIC 'CODE'
    ASSUME CS:Code
INPUT PROC NEAR
    ; ожидание 
    mov  AH, 9h
	mov  DX, OFFSET ENT
	int  21h
	
    ; обнуление 
	xor  BX, BX 
	xor  CX, CX

    INPUT_LOOP:
        mov AH, 8h ; Вводим один символ с клавиатуры.
        int 21h

        cmp AL, 13 ;если возврат коретки - ентер то заканчиваем 
        je INPUT_END
        
        ; Проверяем, что введенный символ является 0 или 1.
        cmp AL, '0'
        jb INPUT_LOOP
        cmp AL, '1'
        ja INPUT_LOOP 

        ; Выводим введенный символ на экран.    
        mov AH, 2h
        mov DL, AL
        int 21h

        ; BX  для хранения 
        mov CL, AL ; save in cl
        mov AX, BX ; copy 

        shl AX, 1 ; сдвигаемся на 1 бит 
        mov BL, CL ; положили считаный 1 или 0
        sub BL, '0'  ; привели к числу
        xor BH, BH  ; обнулили 
        add BX, AX  ;bx увеличили 
       
        
        jmp INPUT_LOOP

    INPUT_END:
  
        mov AH, 9h
        mov DX, OFFSET NLINE
        int 21h

        xor DH, DH
        mov AX, BX
    
        ret
        
INPUT ENDP
    
Code ENDS
    END
