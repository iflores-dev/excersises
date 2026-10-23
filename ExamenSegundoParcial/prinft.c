#include <stdio.h>


int main (void){

int puntosTotales = 0;
int  contador = 1;
int puntajeAlto = 0;
int puntajeBajo = 0;

while (contador <= 5){

    printf("Dame el puntajen %2d:", contador);
    int puntaje;
    scanf("%d", &puntaje);

    if (puntaje >= 0 && puntaje <=1000){
        contador++;
        puntosTotales += puntaje;
        if (puntaje < 200){
            puntajeBajo += 1;
        } else if (puntaje >= 700){
            puntajeAlto++;
        } 
    } else {
        printf("Puntaje Invalido (%d) intente de nuevo\n", puntaje);
    }
}

printf("%15s %5d\n","Puntaje Promedio :", (int)(puntosTotales/5));
printf("%15s %5d\n","Puntajes Altos :", puntajeAlto);
printf("%15s %5d\n","Puntajes Bajos :",  puntajeBajo);

}