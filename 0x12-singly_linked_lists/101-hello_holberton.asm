section .text
Extern printf
Global main
Main:
	Mov edi, msg
	Mor eax, 0
	Call printf
	Section .data
Msg db 'Hello, Holberton',0xa, 0
