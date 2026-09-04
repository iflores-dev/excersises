#include <stdio.h>

int main() {

    int edad = 0;

    printf("Ingresa tu edad: ");
    scanf("%d", &edad);

    if (edad) {
        printf("Eres mayor de edad.\n");
    }
    puts("Fin de la ejecucion");
    return 0;

}