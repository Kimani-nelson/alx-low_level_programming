section .data
    hello_str db "Hello, Holberton", 9, 9, 9, 10, 0  ; 9 = tab, 10 = newline

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    lea rdi, [hello_str]
    xor eax, eax  ; clear eax to indicate success
    call printf

    mov rsp, rbp
    pop rbp
    ret
