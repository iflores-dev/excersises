/*
 =======================================================================================
 Name        : 3_23.c
 Author      : Isaac Flores
 Version     :
 Copyright   : Your copyright notice
 Description : (Find the Largest Number) Write a program that uses scanf to input a 
                series of 10 non-negative numbers and determines and prints the largest 
                of the numbers. Your program should use three variables:
                    a) counter—A counter to count to 10 (i.e., to keep track of how 
                    many numbers have been input and to determine when all 10 numbers 
                    have been processed).
                b) number—The current number input to the program.
                c) largest—The largest number found so far.
 ========================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define VALID_INPUT   1
#define ZERO          0
#define SERIES_COUNT 10

 int main (void){

        uint8_t counter_ui8 = 0;
        uint8_t number_ui8  = 0;
        uint8_t largest_ui8 = 0;
    
        while (counter_ui8 < SERIES_COUNT) {
            printf("Enter a non-negative number between %d - %d: ", ZERO, UINT8_MAX);
            if (VALID_INPUT != scanf("%hhu", &number_ui8)) {
                printf("Invalid input. Please enter a valid non-negative number.\n");
                while (getchar() != '\n'); // Clear the input buffer
                continue; // Skip to the next iteration if input is invalid
            }
            if (number_ui8 > largest_ui8) {
                largest_ui8 = number_ui8; // Update largest if it's the first number or larger than current largest
            }
            counter_ui8++; // Increment the counter after processing the input
        }
    
        printf("The largest number entered is: %d\n", largest_ui8);
    return EXIT_SUCCESS;
 }
