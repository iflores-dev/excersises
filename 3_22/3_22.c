/*
 =======================================================================================
 Name        : 3_22.c
 Author      : Isaac Flores
 Version     :
 Copyright   : Your copyright notice
 Description : (Printing Numbers from a Loop) Write a program that utilizes looping to 
                print the numbers from 1 to 10 side by side on the same line with three 
                spaces between numbers.
 ========================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>



int main(void) {
    int8_t value = 1; // Using int8_t for small range
    printf("Using While loop:\n");
    while (value >= 1 && value <= 10) {
        printf("%d   ", value);
        value++;
    }
    printf("\nUsing For loop:\n");
    for (value = 1; value <= 10; value++) {
        printf("%d   ", value); // number followed by three spaces
    }
    value = 1; // Reset value for next loop
    printf("\nUsing Do-While loop:\n");
    do {
        printf("%d   ", value);
        value++;
    } while (value <= 10);

    return EXIT_SUCCESS;
}