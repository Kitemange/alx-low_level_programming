section .text
	global start

start:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, msglen
	syscall

	mov rax, 60
	mov rdi, 0
	syscall

section .data
	msg db "Hello, Holberton",10
	fmt: db "%s", 10, 0
