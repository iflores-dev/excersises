/*
 ============================================================================
 Name        : 3_16.c
 Author      : Isaac Flores
 Version     :
 Copyright   : Your copyright notice
 Description : (Gas Mileage) Develop a program that uses scanf to input
			   the miles driven and gallons used for each tankfull. The
			   program should calculate and display the miles per gallon
			   obtained for each tankfull. After processing all input
			   information, the program should calculate and print the
			   combined miles per gallon obtained for all tankfuls.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define VALID_INPUT 1		// Definition for Valid Inputs used in scanf.
#define ZERO 		0.0		// Definition for zero values.

int main(void) {
	// Eclipse WA for STDOUT clearance.
	setbuf(stdout, NULL);

	// Definition of the local variables.
	float gallons_f, miles_f = 0.0;
	float averageConsume_f = 0.0;
	int count_i = 0;

	// Ask for the first gallon consume value.
	puts("Enter the gallons used (-1 to exit): ");

	// Check if the value is valid and assigned correctly.
	if (VALID_INPUT == scanf_s("%f", &gallons_f)){
		while (EOF != (signed int)gallons_f){			// Program loop continue until user enter -1.
			if (ZERO >= gallons_f){						// Check if the gas consume is positive.
				fprintf(stderr, "Invalid Input");		// Print error if invalid gas consume.
				return EXIT_FAILURE;					// Exit the program for abnormal flow.
			}
			// Ask for the miles driven value.
			puts("Enter the miles driven: ");
			if(VALID_INPUT != scanf_s("%f", &miles_f)){	// Check if the value is valid and assigned correctly.
				fprintf(stderr, "Invalid Input");		// Print error if invalid miles driven.
				return EXIT_FAILURE;					// Exit the program for abnormal flow.
				break;
			}
			if (ZERO >= miles_f){
				fprintf(stderr, "Invalid Input");		// Print error if invalid miles driven.
				return EXIT_FAILURE;					// Exit the program for abnormal flow.
			}
			averageConsume_f += miles_f/gallons_f;		// Accumulate the total consume.
			count_i++;									// Increase the count of inputs.
			printf_s("The miles/gallon for this tank is: %.2f\n",
					miles_f/gallons_f);
			puts("Enter the gallons used (-1 to exit): ");
			if(VALID_INPUT != scanf_s("%f", &gallons_f)){	// Check if the gas consume is positive.
					fprintf(stderr, "Invalid Input");		// Print error if invalid gas consume.
					return EXIT_FAILURE;					// Exit the program for abnormal flow.
			}
		}
		if (ZERO != count_i){
			printf_s("Average consume for all tankfulls: %.2f\n", // Print the final average consume.
					averageConsume_f/count_i);
		}
		else{
			puts("Exit");									// Exit if none inputs were provieded.
		}
	}
	else{
		fprintf(stderr, "Invalid Input"); 	// Print error if invalid gas consume.
		return EXIT_FAILURE;				// Exit the program for abnormal flow.
	}
	return EXIT_SUCCESS;
}
