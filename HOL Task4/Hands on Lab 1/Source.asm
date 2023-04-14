.686
.model flat, C
; The stack has already been created in the C file

; Inform the asm these vars will be used in an extern C module
EXTERNDEF C n1:DWORD
EXTERNDEF C n2:DWORD
EXTERNDEF C Sum:DWORD
EXTERNDEF C i:DWORD
EXTERNDEF C vec:DWORD

.code
asmMAX proc

MOV [vec], 5
MOV [vec+4], 6
MOV [vec+8], 5
MOV [vec+12], 6
MOV [vec+16], 0

compare:
MOV EBX, [i]
SHL DWORD PTR [EBX], 2
MOV EAX, [vec+EBX]
CMP EAX, 0
JNE adding

MOV EBX, [i]
DIV EBX, [Sum]

; Return value in EAX
MOV EAX, [Sum]
ret

adding:
ADD [Sum], EAX
INC [i]
JMP compare

asmMAX endp
END