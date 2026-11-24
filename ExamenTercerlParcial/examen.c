#include <stdio.h>
#define NIVELES 5
void capturarPuntuaciones(int puntuaciones[], int tamano){
    for (int i = 0; i < tamano; i++){
        printf("ingresar la puntacion del Nivel %d:", i + 1);
        scanf("%d", &puntuaciones[i]);
    }
}
int calcularSumaTotal(int puntuaciones[], int tamano) {
    int total = 0;
    for (int i = 0; i < tamano; i++) {
        total += puntuaciones[i];
    }
    return total;
}
int calcularPuntacionMasAlta(int puntuaciones[], int tamano){
    int maximasPuntuaciones[0];
    for(int i = 1; < tamano; i++){
        if(puntuaciones[i] > maxima){
            maxima = puntuaciones[i];
            return maxima;
        }
    }
}
int contarSuperanObjetivo(int puntuaciones[], int tamano, int objetivo) {
    int contador = 0;
    for (int i = 0; i < tamano; i++) {
        if (puntuaciones[i] >= objetivo) {
            contador++;
        }
    }
    return contador;
}
int main(){
    int puntuaciones[NIVELES];
    int puntuacionesObjetivo;
    printf("sistema de puntuaciones\n\n");
    capturarPuntuaciones(puntuaciones, NIVELES);
    printf("\ningresar las puntuaciones del objetivo a evaluar: ");
    scanf("%d", &puntuacionesObjetivo);
    int total = calcularSumaTotal(puntuaciones, NIVELES);
    int maximo = calcularPuntuacionMasAlta(puntuaciones, NIVELES);
    int nivelObjetivo = contarSuperanObjetivo(puntuaciones, NIVELES, puntuacionObjetivo);

    printf("\nResultados\n");
    printf("La puntuacion total: %d\n", total);
    printf("La puntuacion mas alta: %d\n", maxima);
    printf("La cantidad de niveles alcanzados: %d\n", nivelesObjetivo);
    return 0;
}