PUBLIC X ;Объявляется публичный байт X в сегменте данных SD1 при помощи директивы PUBLIC.
EXTRN exit: far ; дальный переход и изменением cs ip  Он позволяет получить доступ к функции или переменной, объявленной в другом модуле.

SSTK SEGMENT para STACK 'STACK'
	db 100 dup(0)
SSTK ENDS

SD1 SEGMENT para public 'DATA'
	X db 'X'
SD1 ENDS

SC1 SEGMENT para public 'CODE'
	assume CS:SC1, DS:SD1
main:	
	jmp exit ;безусловного перехода jmp exit
SC1 ENDS
END main