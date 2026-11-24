#include <stdio.h>
#include <stdlib.h>

#define SIZE 5000000
#define PI 3.1416

int main ( void ) {

    int n[SIZE];


    for (size_t i = 0; i < SIZE; i++){
        n[i] = 0;
    }

    printf ("%s%8s", "Element", "Value");

    for (size_t i = 0; i < SIZE; i++){
        printf("%7zu%8d\n", i, n[i]);
    }

    return EXIT_SUCCESS;

}