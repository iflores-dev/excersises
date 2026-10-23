#include <stdio.h>
#include <stdint.h>

int main (void) {

// Inicilizar contadores
uint8_t contA, contB, contC, contD, contE, contF;
contA = contB = contC = contD = contE = contF = 0;
char cal = ' ';

//Preguntar por la primer calificacion
//printf("Dame la primer calificacion:\n");
puts ("Dame la primer calificacion: (EOF (CTRL + Z) para salir)");
//Almacenar la primer calificacion
//Mientas la calificacion no sea X
while ((cal = getchar()) != EOF){
    //Aumentar los contadores
    switch(cal){
        case 'A':
        case 'a':
            ++contA; // contA =+ 1, contA = contA = 1, 
            break;
        case 'B':
        case 'b':
            ++contB;
            break;
        case 'C':
        case 'c':
            ++contC;
            break;
        case 'D':
        case 'd':
            ++contD;
            break;
        case 'E':
        case 'e':
            ++contE;
            break;
        case 'F':
        case 'f':
            contF++;
            break;
        case '\n': // ignorar nuevas líneas,
        case '\t': // tabulaciones,
        case ' ': // y espacios en la entrada
            break;
        default:
            printf("Calificacion Invalida: %c (%d)\n", cal, cal);
    }
    //Preguntar por siguiente calificacion
    puts("Dame la siguinente calificaion: (EOF (CTRL + Z) para salir)");
    while(getchar() != '\n');
}

printf("A : %d\n", contA);
printf("B : %d\n", contB);
printf("C : %d\n", contC);
printf("D : %d\n", contD);
printf("E : %d\n", contE);
printf("F : %d\n", contF);
}