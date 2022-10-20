SECTION .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

	SECTION .text
	extern printf
	global main
main:
	mov esi, msg
	mov edi, fmt
	mov eax, 0
	ca printf

	mov eax, 0
	ret
Footer

