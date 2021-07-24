	global main	
	section .text
main:
	

	global _start
_start:
	mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx, msglen
	syscall
	
	mov rax, 60
	mov rdi, 0
	syscall

	section .data
	message db "Hello, Holberton", 10
	maglen:	equ$ -msg
