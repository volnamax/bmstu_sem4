;output \nY\nE\nS\n
;PUBLIC означает, что другие сегменты могут использовать этот сегмент,  
SD1 SEGMENT para public 'DATA'
	S1 db 'Y'
	db 65535 - 2 dup (0) 	; Эта инструкция выделяет память в размере 65535 байт и 
												; заполняет ее нулями, кроме первых двух байт, которые уже были заняты символом 'Y'.
												; Это сделано для того, чтобы убедиться, что сегмент данных занимает определенное место в памяти.
SD1 ENDS

SD2 SEGMENT para public 'DATA'
	S2 db 'E'
	db 65535 - 2 dup (0)
SD2 ENDS

SD3 SEGMENT para public 'DATA'
	S3 db 'S'
	db 65535 - 2 dup (0)
SD3 ENDS

CSEG SEGMENT para public 'CODE'
	assume CS:CSEG, DS:SD1
output:
	mov ah, 2
	int 21h
	mov dl, 13 ; выводятся символы перевода строки 13 и 10
	int 21h
	mov dl, 10
	int 21h
	ret
main:
	mov ax, SD1
	mov ds, ax
	mov dl, S1
	call output
;assume DS:SD2   
	mov ax,  SD2

	mov ds, ax 
	mov dl, ds: S2
	call output
assume DS:SD3
	mov ax, SD3
	mov ds, ax
	mov dl, S3
	call output
	
	mov ax, 4c00h
	int 21h
CSEG ENDS
END main