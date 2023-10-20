section .data
    hello db 'Hello, Holberton', 10, 0

section .text
    global main
    extern printf

main:
    ; write hello to stdout
    push rbp
    mov rbp, rsp
    lea rdi, [rel hello]
    xor eax, eax
    call printf

    ; exit program
    xor eax, eax
    pop rbp
    ret
