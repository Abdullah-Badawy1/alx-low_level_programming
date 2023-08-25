section .data
    hello db "Hello, Holberton", 0
    format db "%s", 10, 0   ; %s for string, 10 for newline, and null-terminator

section .text
    global main
    extern printf

main:
    mov rdi, format   ; Format string
    mov rsi, hello    ; Address of the string to be printed
    xor rax, rax      ; Clear rax register
    call printf       ; Call printf function
    xor rax, rax      ; Set return value to 0
    ret
