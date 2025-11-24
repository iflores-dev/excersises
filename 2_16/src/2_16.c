/*
 ============================================================================
 Name        : 2_16.c
 Author      : Isaac Flores
 Version     :
 Copyright   : Your copyright notice
 Description : (Arithmetic) Write a program that reads two integers from the
               user then displays their sum, product, difference, quotient
               and remainder.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
	setbuf(stdout, NULL);
	puts("This program that reads "
			"two integers from the user then displays "
			"their sum, product, difference, quotient and remainder.");
	puts("Give two number");
	int valueOne, valueTwo = 0;
	if (2 != scanf("%d %d", &valueOne, &valueTwo)){
		fprintf(stderr, "Not valid value(s)!!!\n");
		return EXIT_FAILURE;
	}
	printf("%4d + %d  = %4d\n", valueOne,valueTwo, valueOne+valueTwo);
	printf("%4d - %d  = %4d\n", valueOne,valueTwo, valueOne-valueTwo);
	printf("%4d * %d  = %4d\n", valueOne,valueTwo, valueOne*valueTwo);
	printf("%4d / %d  = %4d\n", valueOne,valueTwo, valueOne/valueTwo);
	printf("%4d %% %d  = %4d\n", valueOne,valueTwo, valueOne%valueTwo);
	return EXIT_SUCCESS;
}
