; ----------------------------------------------------------------------------------------
; Writes "Hello, Holberton" to the console using a C library. Runs on Linux.
;
;     nasm -f elf64 101-hello_holberton.asm && gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello
; ----------------------------------------------------------------------------------------

          global    main
          extern    printf

          section   .text
main:                                       ; This is called by the C library startup code
          mov       rdi, message            ; First integer (or pointer) argument in rdi
          call      printf                    ; puts(message)
          ret                               ; Return from main back into C library wrapper
message:
          db        "Hello, Holberton", 0        ; Note strings must be terminated with 0 in C
