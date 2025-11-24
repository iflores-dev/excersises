/*
 ============================================================================
 Name        : 2_17.c
 Author      : Isaac Flores
 Version     :
 Copyright   : Your copyright notice
 Description : 2.17 (Displaying Values with printf) Write a program that
 	 	 	   displays the numbers 1 to 4 on the same line.
 	 	 	   Write the program using the following methods.
				a) Using one printf statement with no conversion specifications.
				b) Using one printf statement with four conversion specifications.
				c) Using four printf statements.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("(Displaying Values with printf) Write a program that"
			"displays the numbers 1 to 4 on the same line."
			"Write the program using the following methods."
			"\n\ta) Using one printf statement with no conversion specifications."
			"\n\tb) Using one printf statement with four conversion specifications."
			"\n\tc) Using four printf statements.");
	puts("\nOption a)");
	printf("1 2 3 4");
	puts("\nOption b)");
	printf("%d%2d%2d%2d", 1, 2, 3, 4);
	puts("\nOption c)");
	printf("1 ");
	printf("2 ");
	printf("3 ");
	printf("4 ");


	return EXIT_SUCCESS;
}
