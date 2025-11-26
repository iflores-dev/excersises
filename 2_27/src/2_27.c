/*
 ============================================================================
 Name        : 2_27.c
 Author      : Isaac Flores
 Version     :
 Copyright   : Your copyright notice
 Description : (Table of Squares and Cubes) write a program that calculates
 	 	 	   the squares and cubes of the numbers from 0 to 10 and uses
 	 	 	   tabs to display a table.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int value = 0;
	puts("number\tsquare\tcube");
	/*
	printf_s("\n%d\t%d\t%d",   value, (int)sqrt(  value), (int)pow(  value,3));
	printf_s("\n%d\t%d\t%d", ++value, (int)sqrt(++value), (int)pow(++value,3));
	printf_s("\n%d\t%d\t%d", ++value, (int)sqrt(++value), (int)pow(++value,3));
	printf_s("\n%d\t%d\t%d", ++value, (int)sqrt(++value), (int)pow(++value,3));
	printf_s("\n%d\t%d\t%d", ++value, (int)sqrt(++value), (int)pow(++value,3));
	printf_s("\n%d\t%d\t%d", ++value, (int)sqrt(++value), (int)pow(++value,3));
	printf_s("\n%d\t%d\t%d", ++value, (int)sqrt(++value), (int)pow(++value,3));
	printf_s("\n%d\t%d\t%d", ++value, (int)sqrt(++value), (int)pow(++value,3));
	printf_s("\n%d\t%d\t%d", ++value, (int)sqrt(++value), (int)pow(++value,3));
	printf_s("\n%d\t%d\t%d", ++value, (int)sqrt(++value), (int)pow(++value,3));
	*/
	printf_s("  %d\t%d\t%d",   value, value * value, value * value * value);
	value = value + 1;
	printf_s("\n%d\t%d\t%d",   value, value * value, value * value * value);
	value = value + 1;
	printf_s("\n%d\t%d\t%d",   value, value * value, value * value * value);
	value = value + 1;
	printf_s("\n%d\t%d\t%d",   value, value * value, value * value * value);
	value = value + 1;
	printf_s("\n%d\t%d\t%d",   value, value * value, value * value * value);
	value = value + 1;
	printf_s("\n%d\t%d\t%d",   value, value * value, value * value * value);
	value = value + 1;
	printf_s("\n%d\t%d\t%d",   value, value * value, value * value * value);
	value = value + 1;
	printf_s("\n%d\t%d\t%d",   value, value * value, value * value * value);
	value = value + 1;
	printf_s("\n%d\t%d\t%d",   value, value * value, value * value * value);
	value = value + 1;
	printf_s("\n%d\t%d\t%d",   value, value * value, value * value * value);
	value = value + 1;
	printf_s("\n%d\t%d\t%d",   value, value * value, value * value * value);
	value = value + 1;

	return EXIT_SUCCESS;
}
