section .data
    hello db 'Greetings from the Learning Realm!',0
    format db '%s', 0

section .text
    global main
    extern printf

main:
    mov edi, hello        ; Load the address of the string to be printed
    xor eax, eax          ; Clear eax register for return value
    call printf           ; Call printf function
    mov eax, 0            ; Set return value to 0
    ret
