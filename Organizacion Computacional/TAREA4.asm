;PROGRAMA DE LA PRACTICA 8 (TEMPORIZADOR GRANDE)

VIDEO MACRO MSG, COL, REN
    LOCAL AB   
    MOV BH, 00
    MOV BL, 0FH
    MOV SI, 0      ; APUNTADOR DE MENSAJE (25 CARACTERES)
    MOV DI, 1      ;CONTADOR DE RENGLONES
    MOV DH, REN    
    MOV DL, COL
AB: MOV AH, 02     ;UBICO MI CURSOR EN LA POSICION (COL, REN)
    INT 10H
    MOV AH, 09
    MOV CX, 01
    MOV AL, MSG[SI]
    INT 10H     ;IMPRIMO LA LETRA QUE SE DEBE
    INC SI   ;MUEVO LA NUEVA LETRA
    INC DL   ;LA COLUMNA A LA DERECHA  
    MOV AX, DI  ;MUEVE EL CONTADOR DE RENGLONES
    MOV AH, 05
    MUL AH
    CMP SI, AX   ;CADA CINCO CARACTERES VA A MODIFICARSE
    JNZ AB       
    INC DH      ;INCREMENTO RENGLON
    INC DI      ;INCREMENTO CONTADOR
    CMP DI, 06  
    MOV DL, COL
    JNZ AB    
VIDEO ENDM

;PROGRAMA PRINCIPAL
ORG 100H
JMP INICIO

;MENSAJES DE NUMERITOS (0-9)
UNO DB ' 11    1    1    1  11111',0
DOS DB '22222    2222222    22222',0
TRES DB '33333    3  333    333333',0 
CUAT DB '4   44   444444    4    4',0
CINC DB '555555    55555    555555',0
SEIS DB '6    6    666666   666666',0
SIET DB '77777    7    7    7    7',0
OCHO DB '888888   8888888   888888',0
NUEV DB '999999   999999    9    9',0
CERO DB '000000   00   00   000000',0 
SEP DB ' ***  ***       ***  *** ',0

INICIO:
MOV AX,03H
INT 10H

CICLO:
MOV AH,2CH
INT 21H
MOV [1400H],2
MOV [1401H],CH
MOV [1402H],CL
MOV [1403H],DH

MOV AH,0H
MOV AL,[1401H]
MOV BH,10
PUSH AX
DIV BH
CALL SACA
MOV BH,10
POP AX
DIV BH
MOV AL,AH
CALL SACA
MOV AL,0AH
CALL SACA
MOV AH,0H
MOV AL,[1402H]
MOV BH,10
PUSH AX
DIV BH
CALL SACA
MOV BH,10
POP AX
DIV BH
MOV AL,AH
CALL SACA
MOV AL,0AH
CALL SACA
MOV AH,0H
MOV AL,[1403H]
MOV BH,10
PUSH AX
DIV BH
CALL SACA
MOV BH,10
POP AX
DIV BH
MOV AL,AH
CALL SACA
JMP CICLO
        
RET

;FUNCION QUE IMPRIMIR EN GRANDE LOS NUMEROS DE INICIO
SACA PROC 
    CMP AL, 0
    JNZ U
    VIDEO CERO, [1400H], 2   ;NUMERO CERO 
    JMP SIGUE
U:  CMP AL, 1
    JNZ D
    VIDEO UNO, [1400H], 2   ;NUMERO UNO
    JMP SIGUE
D:  CMP AL, 2
    JNZ T
    VIDEO DOS, [1400H], 2   ;NUMERO UNO
    JMP SIGUE
T:  CMP AL, 3
    JNZ C
    VIDEO TRES, [1400H], 2   ;NUMERO UNO
    JMP SIGUE
C:  CMP AL, 4
    JNZ CI
    VIDEO CUAT, [1400H], 2   ;NUMERO UNO
    JMP SIGUE
CI:  CMP AL, 5
    JNZ S
    VIDEO CINC, [1400H], 2   ;NUMERO UNO
    JMP SIGUE
S:  CMP AL, 6
    JNZ SIE
    VIDEO SEIS, [1400H], 2   ;NUMERO UNO
    JMP SIGUE
SIE:  CMP AL, 7
    JNZ O
    VIDEO SIET, [1400H], 2   ;NUMERO UNO
    JMP SIGUE
O:  CMP AL,8
    JNZ N
    VIDEO OCHO, [1400H], 2   ;NUMERO UNO
    JMP SIGUE
N:  CMP AL,9
    JNZ W
    VIDEO NUEV, [1400H], 2   ;NUMERO UNO
    JMP SIGUE
W:  VIDEO SEP, [1400H], 2 
SIGUE: 
       ADD [1400H],08
       RET
SACA ENDP
          