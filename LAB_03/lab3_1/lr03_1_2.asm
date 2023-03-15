PUBLIC output_X ; объявление процедуры output_X как публичной, чтобы она была доступна из других модулей.
EXTRN X: byte ;объявление внешней метки X типа byte, которая определена в другом файле.

DS2 SEGMENT AT 0b800h ;Видеопамять текстового режима доступна по адресу B8000h.
	CA LABEL byte  
	ORG 80 * 2 * 2 + 2 * 2; 
	SYMB LABEL word	
DS2 ENDS

CSEG SEGMENT PARA PUBLIC 'CODE'
	assume CS:CSEG, ES:DS2
output_X proc near
	mov ax, DS		
	mov es, ax
	mov ah, 10
	mov al, X
	mov symb, ax
	ret
output_X endp
CSEG ENDS
END