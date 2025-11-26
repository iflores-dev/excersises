/*
 ============================================================================
 Name        : 2_28.c
 Author      : Isaac Flores
 Version     :
 Copyright   : Your copyright notice
 Description : (Target Heart-Rate Calculator) While exercising, you can use
 	 	 	   a heart-rate monitor to see that your heart rate stays within
 	 	 	   a safe range suggested by your doctors and trainers. According
 	 	 	   to the American Heart Association (AHA) (http://bit.ly/
 	 	 	   AHATargetHeartRates), the formula for calculating your maximum
 	 	 	   heart rate in beats per minute is 220 minus your age in years.
 	 	 	   Your target heart rate is 50–85% of your maximum heart rate.
 	 	 	   Write a program that prompts for an inputs the user’s age and
 	 	 	   calculates and displays the user’s maximum heart rate and the
 	 	 	   range of the user’s target heart rate.
 ============================================================================
 */
/**********************************
 *			 INCLUDES             *
 **********************************/
#include <stdio.h>
#include <stdlib.h>

/**********************************
 *			DEFINITIONS			  *
 **********************************/
#define MAX_BPM 220
#define VALID_INPUT 1

/**********************************
 *			   MAIN  			  *
 **********************************/
int main(void) {
	/*WA for Eclipse.*/
	setbuf(stdout, NULL);
	/*Ask the user's age and assign it to a variable.*/
	puts("Target Heart-Rate Calculator\nInput your age:");
	int age = 0;
	if ( VALID_INPUT != scanf_s("%d", &age)){	//Check for valid input.
		fprintf(stderr, "Invalid input!!!");	//Print a error if invalid input.
		return EXIT_FAILURE;					//Exit for invalid flow.
	}
	/*Calculate the Target Hear Rate based on age*/
	int targetHeartRate = MAX_BPM - age;
	printf_s("Maximum Hear Rate : %d bpm\n"
			"Target Hear Rate at 50%% : %d bpm\n"
			"Target Hear Rate at 85%% : %d bpm",
										       targetHeartRate,
										(int)((targetHeartRate) * 0.5),
										(int)((targetHeartRate)*0.85));
	return EXIT_SUCCESS;
}
