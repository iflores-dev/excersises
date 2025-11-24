/*
 ============================================================================
 Name        : 2_18.c
 Author      : Isaac Flores
 Version     :
 Copyright   : Your copyright notice
 Description : 2.18 (Comparing Integers) Write a program that reads two
 	 	 	   integers from the user then displays the larger number
 	 	 	   followed by the words “is larger.” If the numbers are equal,
 	 	 	   display the message “These numbers are equal.” Use only the
 	 	 	   single-selection form of the if statement.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	puts("Enter two values:\n");
	int valueOne, valueTwo = 0;
	if ( 2  != scanf("%d %d", &valueOne, &valueTwo)){
		fprintf(stderr, "Not valid value(s)!!!");
		return EXIT_FAILURE;
	}
	if (valueOne > valueTwo){
		printf("\n%d is larger.", valueOne);
	}
	if (valueOne < valueTwo){
		printf("\n%d is larger", valueTwo);
	}
	if (valueOne == valueTwo){
		puts("\nThese numbers are equal.");
	}
	return EXIT_SUCCESS;
}
