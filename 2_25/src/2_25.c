/*
 ============================================================================
 Name        : 2_25.c
 Author      : Isaac Flores
 Version     :
 Copyright   : Your copyright notice
 Description : (Integer Value of a Character) Write a C program that displays
 	 	 	   the integer equivalents of some uppercase letters, lowercase
 	 	 	   letters, digits and special symbols. At a minimum, determine
 	 	 	   the integer equivalents of the following: A B C a b c 0 1 2 $
 	 	 	   * + / and the space character.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

	/*Vairables de difinition*/
	char A 		= 'A';
	char B		= 'B';
	char C 		= 'C';
	char a 		= 'a';
	char b 		= 'b';
	char c 		= 'c';
	int zero 	= 0;
	int one  	= 1;
	int two 	= 2;
	char dollar = '$';
	char pound  = '*';
	char sum 	= '+';
	char slash	= '/';

	/*Print vairables as integer*/
	printf_s("%c -> (int)%i"  , A, A);
	printf_s("\n%c -> (int)%i", B, B);
	printf_s("\n%c -> (int)%i", C, C);
	printf_s("\n%c -> (int)%i", a, a);
	printf_s("\n%c -> (int)%i", b, b);
	printf_s("\n%c -> (int)%i", c, c);
	printf_s("\n%d -> (int)%i", zero, zero);
	printf_s("\n%d -> (int)%i", one, one);
	printf_s("\n%d -> (int)%i", two, two);
	printf_s("\n%c -> (int)%i", dollar, dollar);
	printf_s("\n%c -> (int)%i", pound, pound);
	printf_s("\n%c -> (int)%i", sum, sum);
	printf_s("\n%c -> (int)%i", slash, slash);

	return EXIT_SUCCESS;
}
