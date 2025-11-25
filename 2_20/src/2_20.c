/*
 ============================================================================
 Name        : 2_20.c
 Author      : Isaac Flores
 Version     :
 Copyright   : Your copyright notice
 Description : (Circle Area, Diameter and Circumference) For a circle of
 	 	 	   radius 2, display the diameter, circumference and area.
 	 	 	   Use the value 3.14159 for π. Use the following formulas
 	 	 	   (r is the radius): diameter = 2r, circumference = 2πr and
 	 	 	   area = πr2. Perform each of these calculations inside the
 	 	 	   printf statement(s) and use the conversion specification
 	 	 	   %f. This chapter discussed only integer constants and
 	 	 	   variables.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main(void) {

	int radius = 2;
	printf_s("Diameter: %7d", 2*radius);
	printf_s("\nCircumference: %5.2f", 2*PI*radius);
	printf_s("\nArea: %14.2f", PI*radius*radius);
	return EXIT_SUCCESS;
}
