/*
 =======================================================================================
 Name        : 3_23.c
 Author      : Isaac Flores
 Version     :
 Copyright   : Your copyright notice
 Description : (Tabular Output) Write a program that utilizes looping to produce the 
                following   table of values: A, A+2, A+4, A+6
 ========================================================================================
 */

#include <stdio.h>
#include <stdlib.h>    
#include <stdint.h>

#define VALID_INPUT 1

int main(size_t argc, char const *argv[]) {
    typedef int8_t int8;
    if (argc > 1){
        fprintf(stderr, "Wrong usage, no parameter required: %s\n", argv[0]);
        return EXIT_FAILURE;
    }

    int8 A = 1;
    while ( 10 >= A ){
        put("please enter an integer between 0 and 255.");
        if (VALID_INPUT != scanf("%hhd", &A)) {
        fprintf(stderr, "Invalid input, please enter an integer between 0 and 255.\n");
        continue;
        }
        printf("A\tA + 2\tA + 4\tA + 6\n%d\t%d\t%d\t%d\n", A, A+2, A+4, A+6);
    }
   
    return EXIT_SUCCESS;
}
