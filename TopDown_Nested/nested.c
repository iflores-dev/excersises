#include <stdio.h>

int main (void){
    //Inicializar Contador Aprobados a cero
    int aprobados = 0;
    //Inicializar Contador Reprobados a cero
    int reprobados = 0;
    //Inicialiar Contador Estudiantes a uno
    int estudiantes = 1;

    //Mientras el contador de estudiantes sea menor o igual a diez
    while(estudiantes <= 10){
        //	Preguntar por resultado del examen
        puts("Ingresa el resultado del examen (1 para Aprobado, 2 para Reprobado)");
        int resultado = 0;
        scanf ("%d", &resultado);
        //	Si el resultado es 1
        if (1 == resultado){
            //Incrementar el contador Aprobado
            aprobados++;
        }
        //De lo contario si es 2
        else if (2 == resultado){
        //		Incrementar el contador Reprobado
            reprobados++;
        }
        //	De lo contrario
        else {
        //		Imprime Valor invalido
            puts("Resultado Invalido");
        //		Salir
            return 0;
        }
        //	Incrementar el contador de Estudiante
        estudiantes++;
    }

    //Imprimir el numero de Aprobado
    printf ("Numero de Aprobados: %i \n", aprobados);
    //Imprimir el numero de Reporbado
    printf ("Numero de Reprobados: %i \n", reprobados);
    //Si el numero de Aprobado es igual  mayor a ocho
    if (aprobados >= 8){
        //	Imprima Bono para el instructor
        puts("Bono para el intructor");
    }
    //De lo contrario
    else {
        //	Imprimir Bono no ganado
        puts("No Bono");
    }

    return 1;
}

