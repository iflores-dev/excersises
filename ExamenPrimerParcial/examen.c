#include <stdio.h>

int main() {
    int edad, n_aut, empleado;
    char acceso;
    int permitido = 1;

    int a = 0, c = 0;

    printf("   Sistema de Acceso \n");

        printf("Ingresa la edad: ");
    scanf("%d", &edad);

    printf("Ingresa el nivel de autorizacion [un número]: ");
    scanf("%d", &n_aut);

    printf("Ingresa el numero de empleado: ");
    scanf("%d", &empleado);

    printf("Ingresa el tipo de acceso [un caracter]:");
    scanf(" %c", &acceso);

    printf("\n");


    if (edad < 25 || edad > 60)
    {
        printf("Edad fuera del rango permitido (25 a 60).\n");
        permitido = 0;
    }

    if (n_aut < 3)
    {
        printf("Nivel de autorizacion incorrecto.\n");
        permitido = 0;
    }

    if (empleado % 2 != 0)
    {
        printf("El numero de empleado no es par.\n");
        permitido = 0;
    }

    if (acceso != 'A')
    {
        printf("Tipo de acceso incorrecto (debe ser 'A').\n");
        permitido = 0;
    }

    if (permitido == 1)
    {
        printf("\nAcceso Permitido\n");
    } else {
        printf("\nAcceso Denegado\n");
    }

    return 0;
}