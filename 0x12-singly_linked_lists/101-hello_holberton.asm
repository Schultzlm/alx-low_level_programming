section .text
global main
main:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, msglen
	syscall

	section .rodata
	msg: "Hello, Holberton", 10
	msglen: equ $ - msg
