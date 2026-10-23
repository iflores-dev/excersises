#include <stdio.h>

int main (void){

//Inicializar variables
int sumatoria = 0;
int contador = 0;
int calificacion = 0;

//Pedir primer calificacion
puts("Dame la primer calificacion (-1 para salir)");
scanf("%d", &calificacion);

//mientras clificacion no sea -1
while (calificacion != EOF){
    sumatoria += calificacion;
    contador += 1;
    //Preguntar siguiente calificacion
    puts("Dame la10 siguiente calificacion (-1 para salir)");
    scanf("%d", &calificacion);
}
//Imprimir promedio
printf("%.1f", (float)sumatoria/contador);

}