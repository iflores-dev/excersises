/*
 =======================================================================================
 Name        : 3_21.c
 Author      : Isaac Flores
 Version     :
 Copyright   : Your copyright notice
 Description : (Predecrementing vs. Postdecrementing) Write a program that demonstrates
                the difference between predecrementing and postdecrementing using the 
                decrement operator --.
 ========================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
     int8_t value = 0;
    printf("Demonstrating predecrementing and postdecrementing:\n");
     value = 5; 
     printf("Initial value = %d\n", value);     
     /* Postdecrement: value of expression is the original value, then value is decremented */
     printf("After Value-- = %d, Value = %d  (postdecrement)\n", value--, value);
     printf("Value after postdecrement = %d\n", value);

     value = 5;
     printf("Initial value = %d\n", value);
     /* Predecrement: value of expression is the original value, then value is decremented */
     printf("After --Value = %d, Value = %d  (predecrement)\n", --value, value);
     printf("Value after predecrement = %d\n", value);
;
     return 0;
}