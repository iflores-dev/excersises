/*
 ============================================================================
 Name        : 2_29.c
 Author      : Isaac Flores
 Version     :
 Copyright   : Your copyright notice
 Description : (Sort in Ascending Order) Write a program that inputs three
 	 	 	   different numbers from the user.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define VALID_INPUTS 3

int main(void) {
	/* WA for Eclipse STDOUT buffer clearance. */
	setbuf(stdout, NULL);
	/* Ask for three values to the user and assign to a variable. */
	puts("Input Three Values");
	int valueLow, valueMid, valueHigh = 0;
	if (VALID_INPUTS != scanf_s("%d %d %d", &valueLow, &valueMid, &valueHigh)){ 	// Check for valid inputs.
		fprintf(stderr, "Invalid input(s)");						// Print an error for invalid input.
		return EXIT_FAILURE;										// Exit for abnormal flow.
	}

	/* Ascending reorder for first and second value */
	if (valueLow > valueMid ){
		{
			int tempValue = valueLow;
			valueLow = valueMid;
			valueMid = tempValue;
		}
	}
	/* Ascending reorder for second and third value. */
	if (valueMid > valueHigh ){
			{
				int tempValue = valueMid;
				valueMid = valueHigh;
				valueHigh = tempValue;
			}
	}
	/* Ascending reorder for first and second value in case third value was displaced to the second place.*/
	if (valueLow > valueMid ){
			{
				int tempValue = valueLow;
				valueLow = valueMid;
				valueMid = tempValue;
			}
		}
	/* Print the results */
	printf_s("Ascending Order (Low -> High)\n%d -> %d -> %d", valueLow, valueMid, valueHigh);
	return EXIT_SUCCESS;
}
