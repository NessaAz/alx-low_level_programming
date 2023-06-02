section .data
    message db 'Hello, Holberton\n', 0
    format db '%s', 0

section .text
    extern printf

global main
main:
    sub rsp, 8     ; Align stack to 16-byte boundary

    mov rdi, format
    mov rsi, message
    xor eax, eax   ; Clear EAX register
    call printf

    add rsp, 8     ; Restore stack alignment
    xor eax, eax   ; Return 0
    ret
