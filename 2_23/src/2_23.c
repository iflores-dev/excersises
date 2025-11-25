/*
 ============================================================================
 Name        : 2_23.c
 Author      : Isaac Flores
 Version     :
 Copyright   : Your copyright notice
 Description : (Multiples) Write a program that reads two integers and
 	 	 	   determines and displays whether the first is a multiple of the
 	 	 	   second. Use the remainder operator.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL); // Clear STDOUT buffer for eclipse.
	puts("Enter two values:"); // Ask for two values.
	int value1, value2 = 0;		// Declaration and initialize the values to 0.
	if (2 != scanf_s("%d %d", &value1, &value2)){ // Check for valid values.
		fprintf(stderr, "Invalid value(s)");	// Print an error for invalid values.
		return EXIT_FAILURE;					// Exit in case of abnormal flow.
	}
	printf_s("%d is %s of %d", value1,
							   value2%value1 ? "no a multiple": "multiple",
							   value2);  // Print if the value1 is multiple of value2
	return EXIT_SUCCESS;
}
