#include <stdio.h>


int main (void){

    int valor_uno = 0;
    int valor_dos = 0;
    int datos_escritos = 0;

    
    printf("Dame dos valores: \n");
    datos_escritos = scanf("%d%d", &valor_uno, &valor_dos);
    printf("Datos escritos = %d", datos_escritos);

    return 0;
}