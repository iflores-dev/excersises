/*
 =======================================================================================
 Name        : 3_23.c
 Author      : Isaac Flores
 Version     :
 Copyright   : Your copyright notice
 Description : (Tabular Output) Write a program that uses looping to print the following 
                table of values. Use the tab escape sequence, \t, in the printf statement 
                to separate the columns with tabs.
 ========================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> 

#define TENS        10
#define HUNDREDS    100
#define THOUSANDS   1000



int main (void){

    uint8_t counter_u8 = 1;             // Counter variable initialized to 1
    printf("N\t10*N\t100*N\t1000*N\n"); // Print table header
    while(10 >= counter_u8){            // Loop from 1 to 10
        printf("%u\t%u\t%u\t%u\n", 
            counter_u8, counter_u8*TENS, 
            counter_u8*HUNDREDS, 
            counter_u8*THOUSANDS);
        counter_u8++;                   // Increment counter
    }

}