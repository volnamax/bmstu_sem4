EXTRN X: byte ; ;Объявляет символ "X" как внешний, указывая, что он будет определен в другом модуле.
PUBLIC exit ;Объявляет символ "выход" как общедоступный, позволяя другим модулям использовать его.	

SD2 SEGMENT para 'DATA'
	Y db 'Y'
SD2 ENDS

SC2 SEGMENT para public 'CODE'
	assume CS:SC2, DS:SD2	
exit:
	mov ax, seg X ;загружается сегментный адрес переменной X;
	mov es, ax
	mov bh, es:X

	mov ax, SD2
	mov ds, ax

	xchg ah, Y ;значе  ния в регистрах ah и Y меняются местами;
	xchg ah, ES:X ;меняет местами значения AH и ячейку памяти, на которую указывает X, в сегменте ES.
	xchg ah, Y	

	mov ah, 2
	mov dl, Y
	int 21h	
	
	mov ax, 4c00h
	int 21h
SC2 ENDS
END