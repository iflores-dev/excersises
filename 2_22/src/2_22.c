/*
 ============================================================================
 Name        : 2_22.c
 Author      : Isaac Flores
 Version     :
 Copyright   : Your copyright notice
 Description : (Odd or Even) Write a program that reads an integer and
 	 	 	   determines and displays whether it’s odd or even. Use the
 	 	 	   remainder operator. An even number is a multiple of two. Any
 	 	 	   multiple of two leaves a remainder of zero when divided by 2.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int  inputValue = 0;								// Initialization of the internal variable.
	setbuf(stdout, NULL);
	puts("Enter a number"); 							// Ask for a number, enter in the console.
	if (scanf_s("%d", &inputValue)){ 					// Check if user enter a valid number.
		printf_s("%s", inputValue%2 ? "Odd" : "Even" ); // Print Odd is there is remainder, and Even if no.
		return EXIT_SUCCESS;							// Exit program for normal flow.
	}
	fprintf(stderr, "Invalid input!!!");				// Print an error in case of invalid input
	return EXIT_FAILURE;								// Exit program for abnormal flow.

}
