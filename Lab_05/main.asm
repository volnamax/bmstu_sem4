EXTRN	INPUT : NEAR
EXTRN	UOct : NEAR
EXTRN	SHex : NEAR	

PUBLIC ENT
PUBLIC NLINE
PUBLIC N

StkSeg SEGMENT PARA STACK 'STACK'
    DB 200h DUP (?)
StkSeg ENDS

DataS SEGMENT WORD 'DATA'
    F	DW	UOct, SHex ; f  - содержит адреса функций 
	N	DW	? ; save num input
	
	MENU	DB	'MENU:', 10, 13
		DB	'   0. Menu', 10, 13
		DB	'   1. Input number', 10, 13
		DB	'   2. Oct unsigned', 10, 13
		DB	'   3. Hex signed', 10, 13
		DB	'   4. Exit', 10, 13, '$'
		
	ENT	DB	'> $'
	NLINE	DB	10, 13, '$'
DataS ENDS

Code SEGMENT PARA PUBLIC 'CODE'
    ASSUME CS:Code, DS:DataS, SS:StkSeg
Main:
    mov AX, DataS
    mov DS, AX

    PRINT_MENU:
	    mov  DX, OFFSET MENU
        mov  AH, 9h
	    int  21h
    DELAY:
        mov  AH, 9h
	    mov  DX, OFFSET ENT
	    int  21h

    SCAN_CHOICE:
        ; Вводим символ
        mov  AH, 1h
        int  21h
        ; проверяем был ли наш символ больше 4 и меньше 0 если так, то повторно считываем символ 
        cmp  AL, '0'
        jb   SCAN_CHOICE ; (jump if below).если ниже  Если флаг CF установлен. то управление передается на указанную метку
        cmp  AL, '4'
        ja   SCAN_CHOICE ; (jump if above) если выше) Если флаг CF не установлен в единицу и флаг ZF не установлен в единицу, то управление передается на указанную метку,
            
        mov  BL, AL
        xor  BH, BH ; обнуляем и записываем символ 

        mov  AH, 9
        mov  DX, OFFSET NLINE ; перевод на новую строку 
        int  21h
        
        sub  BX, '0' ; ПРЕобразуем в число 
		; выходим если 4 
        cmp  BX, 4 
        je  EXIT ;выполняется условный переход (jump), если BX равен 4 (то есть если установлен флаг ZF и сброшены флаги CF и SF
        
        ; вывод меню если 0
        cmp  BX, 0
        je   PRINT_MENU
        
        ; ввод числа  меню если 1            
        cmp  BX, 1
        je   INPUT_NUMBER
        
        ;Поиск индекса
        sub  BX, 2h ; вычитаем из введенного числа 2 в 16ричной 
        shl  BX, 1h ; (сдвиг влево) умножает значение в BX на 2, чтобы преобразовать индекс функции в смещение в таблице функций.
            
        call F[BX] ; вызов функции bx  есть смещение в таблице 
            
        jmp DELAY
    INPUT_NUMBER:
        call INPUT
        
        mov  N, AX
            
        jmp  DELAY
            
    EXIT:
        mov  AH, 4Ch
        xor  AL, AL
        int  21h
Code ENDS
    END Main