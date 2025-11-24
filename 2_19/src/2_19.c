/*
 ============================================================================
 Name        : 2_19.c
 Author      : Isaac Flores
 Version     :
 Copyright   : Your copyright notice
 Description : (Arithmetic, Largest Value and Smallest Value) Write a program
 	 	 	   that inputs three different integers from the keyboard, then
 	 	 	   displays the sum, the average, the product, the smallest and
 	 	 	   the largest of these numbers. Use only the single-selection
 	 	 	   form of the if statement
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	puts("Input three values:");
	int value1, value2, value3 = 0;
	if ( 3 != scanf("%d %d %d", &value1, &value2, &value3)){
		fprintf(stderr, "Invalid inputs(s)");
		return EXIT_FAILURE;
	}
	printf_s("\nSum     %4d +%4d +%4d =% d", value1, value2, value3, value1 + value2 + value3);
	printf_s("\nAvarage %7.2f", (float)(value1 + value2 + value3) / 3);
	printf_s("\nProduct %4d* %4d *%4d =% d", value1, value2, value3, value1*value2*value3);
	if (value1 < value2){
		if(value1 < value3){
			printf_s("\n%d is the smallest number." ,value1);
		}
	}
	if (value2 < value1){
		if (value2 < value3){
			printf_s("\n%d is the smallest number.", value2);
		}
	}
	if (value3 < value1){
		if (value3 < value2){
			printf_s("\n%d is the smallest number.", value3);
		}
	}
	if (value1 > value2){
		if (value1 > value3){
			printf_s("\n%d is the largest number.", value1);
		}
	}
	if (value2 > value1){
		if(value2 > value3){
			printf_s("\n%d is the largest number.", value2);
		}
	}
	if (value3 > value1){
		if (value3 > value2){
			printf_s("\n%d is the largest number.", value3);
		}
	}
	return EXIT_SUCCESS;
}
