/*
 ============================================================================
 Name        : 2_26.c
 Author      : Isaac Flores
 Version     :
 Copyright   : Your copyright notice
 Description : (Separating Digits in an Integer) Write a program that inputs
 	 	 	   one five-digit number, separates the number into its individual
 	 	 	   digits and displays the digits separated from one another by
 	 	 	   three spaces each. [Hint: Use combinations of integer division
 	 	 	   and the remainder operation.]
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);						      	// WA for Eclipse.
	puts("Enter a number up to five digits:");			// Ask for 5-digit value.
	int value = 0;										// Declare a variable to storage the value.
	if (!scanf_s("%5d", &value)){						// Assign up to 5 digit value to the variable, and check for valid input
		fprintf(stderr, "ERROR: Invalid Input !!!");	// Print error message for invalid value.
		return EXIT_FAILURE;							// Exit the program for invalid input.
	}
	printf_s("%4d%4d%4d%4d%4d", (value/10000),		//Print the digit in the expected format.
								(value%10000)/1000,
								(value%1000)/100,
								(value%100)/10,
								(value%10));
	return EXIT_SUCCESS;
}
