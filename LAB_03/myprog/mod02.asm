PUBLIC input_sym
PUBLIC MSG_RES

EXTRN sym: byte
EXTRN num: byte

EXTRN print_res: far


PRINT_MSG SEGMENT para public 'DATA'
	MSG_SYM db 13, 10, 'Input symbol: ', '$'
	MSG_NUM db 13, 10, 'Input num: ', '$'
	MSG_RES db 13, 10, 'Res symbol: ', '$'
PRINT_MSG ENDS

COD SEGMENT para public 'CODE'
	assume CS:COD
print_line_translation:
    mov ah, 02h
    mov dl, 13 ; выводятся символы перевода строки 13 и 10
	int 21h
	mov dl, 10
	int 21h
    ret

input_sym:
; вывод приглашения для ввода символа 
    mov ax, PRINT_MSG
    mov ds, ax
	mov dx, OFFSET MSG_SYM
    mov ah, 9
	int 21h
    
  ; ожидаем ввода символа
    mov ah, 01h
    int 21h

    ; сохраняем введенный символ в буфер
    mov sym, al
    call print_line_translation

    ; вывод приглашения для ввода числа 
    mov ax, PRINT_MSG
    mov ds, ax
	mov dx, OFFSET MSG_NUM
    mov ah, 9
	int 21h

    ; считываем число 
    mov ah, 01h
    int 21h
    sub al, '0' ; конвертация символа цифры в число
    mov num, al ; сохраняем 
    int 21h   
    jmp print_res
    
COD ENDS
END