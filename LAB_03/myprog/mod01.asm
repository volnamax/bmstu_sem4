; из двух модулей. Точку входа разместить в первом, затем передать
; управление с помощью дальнего перехода во второй, где
; осуществить ввод строчной буквы латинского алфавита и цифры
; K. Затем вернуть управление в первый модуль и там вывести
; букву, которая в алфавите на K позиций правее исходной
PUBLIC sym
PUBLIC num
PUBLIC print_res

EXTRN MSG_RES: byte
EXTRN input_sym: far

DATA_RES_SYM SEGMENT para public 'DATA'
	sym db ?
	num db ?
DATA_RES_SYM ENDS

STACK_SEG SEGMENT para STACK 'STACK'
	db 512 dup(0)
STACK_SEG ENDS

CODE_SEG SEGMENT para public 'CODE'
assume CS:CODE_SEG, DS:DATA_RES_SYM
main:
    jmp input_sym
	
print_res:
    mov al, num ; загрущили число в рег 
    add al, sym  ; сложили с чимволом 

	mov dx, OFFSET MSG_RES ; вывод строки сообщения 
    mov ah, 9
	int 21h

    ; вывод символа 
    mov ah, 02h
    mov dl, al
    int 21h

    mov ax, 4c00h
	int 21h
CODE_SEG ENDS
END main





