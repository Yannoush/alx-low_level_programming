extern printf

section.text
global main

main:

mov rdi, format
mov rsi, msg
mov rax, 0
call printf
call printf

pop rbp

mov rax,0
ret

section .data
msg: db 'Hello,Holberton\n', 0
format: db "%s", 10, 0
