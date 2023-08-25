section .data
    hello_msg db "Hello, Holberton", 0   ; Null-terminated string
    newline db 10                   ; Newline character (ASCII 10)

section .text
    global main
    extern printf

main:
    sub rsp, 8            ; Align the stack to 16 bytes
    lea rdi, [hello_msg]  ; Load the address of the string into rdi
    call printf          ; Call the printf function

    lea rdi, [newline]    ; Load the address of the newline character
    call printf          ; Call the printf function to print a newline

    add rsp, 8            ; Restore the stack pointer
    xor eax, eax          ; Return 0 from main
    ret
