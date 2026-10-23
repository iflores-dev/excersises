#include <stdio.h>


int main(void){

    //Definit var suma de calificacion y contador no. de calificaciones
    int sumatoria_de_cal = 0;
    int no_calificaciones = 0;

    //Mientras calificaciones menos de 10
    while (no_calificaciones < 10){
        int cal = 0;
        printf("Dame calificacion %d: ", no_calificaciones + 1);
        scanf("%d", &cal);
        //sumar sumatoria mas calificacion actual
        sumatoria_de_cal += cal;
        //no_califificaciones = no_califificaciones + 1;
        no_calificaciones += 1;
    }
    // Dividir la sumatoria de calificaciones entre 10 e imprimir
    printf("Promedio de calificaciones = %.2f", (float)sumatoria_de_cal / 10);
    return 0;

}


