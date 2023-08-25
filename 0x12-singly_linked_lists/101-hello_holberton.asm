global main
extern printf

main:
    mov edi, format   ; Load the address of the format string into edi
    xor eax, eax      ; Clear eax register
    call printf       ; Call the printf function
    mov eax, 0        ; Set eax to 0 (return value)
    ret               ; Return from the main function

format: db `Hello, Holberton\n`,0
