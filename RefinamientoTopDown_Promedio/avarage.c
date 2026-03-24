#include <stdio.h>

int main (void){
//Inicializar contador a cero
int contador = 0;
//Inicializar promedio a cero
float promedio = 0;
//Inicializar suma a cero
int suma = 0;
//Inicializar calificacion (Variable para almacenar la entrada del usuario)
int calificacion = 0;

//Preguntar al usuario la primer calificacion
printf("%s", "Ingresa la primer calificacion (-1 para Salir)");
scanf("%d", &calificacion);
//Mientras (si) la calificacion no es -1:
while (calificacion != -1){

    //	Sumar la calificacion a la variable suma
    suma = suma + calificacion;
    //	Incrementar el contador
    contador = contador + 1;
    //	Preguntar al usuario la siguiente calificacion
    printf("%s", "Ingresa la siguiente calificacion (-1 para Salir)");
    scanf("%d", &calificacion);
}
//Si es mayor contador que cero
if (contador > 0){
    //	Calcular promedio igual a suma entre el contador
    promedio = (float) suma / contador;
    //	Imprimir promedio
    printf("Promedio de la clase: %.2f", promedio);
}
//De lo contrario
else {
    //	Imprimir Calificaciones no ingresadas
    puts("Calificaciones no Ingresadas");
}

}