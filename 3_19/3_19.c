
/*
 =======================================================================================
 Name        : 3_19.c
 Author      : Isaac Flores
 Version     :
 Copyright   : Your copyright notice
 Description : (Interest Calculator) The simple interest on a loan is calculated by the 
                formula interest = principal * rate * days / 365;
                The preceding formula assumes that rate is the annual interest rate, 
                so it divides by 365 (days per year). Develop a program that uses scanf 
                to input principal, rate and days for several loans, and will calculate 
                and display the simple interest for each loan, using the preceding formula.
 ========================================================================================
 */
// Include necessary headers
#include <stdio.h>
#include <stdlib.h> 
// Define constant for valid input
#define VALID_INPUT 1
// Main function
int main(void) {
    // Prompt user for loan principal
    puts("Enter loan principal (-1 to end):");
    float principal_f = 0.0f;                                   // Variable to store principal amount
    if (VALID_INPUT != scanf("%f", &principal_f)) {           // Input validation
        fprintf(stderr, "Invalid input, exiting program...\n"); 
        return EXIT_FAILURE;                                    // Exit on invalid input
    }
    while (EOF != principal_f) {                                // Loop until EOF or sentinel value 
    puts("Enter interest rate:");                               // Prompt for interest rate
        float rate_f = 0.0f;                                   // Variable to store interest rate
        if (VALID_INPUT != scanf("%f", &rate_f)) {           // Input validation
            fprintf(stderr, "Invalid input, exiting program...\n");   
            return EXIT_FAILURE;
        }
        puts("Enter term of the loan in days:");                     // Prompt for loan term in days
        int days_i = 0;                                              // Variable to store number of days
        if (VALID_INPUT != scanf("%d", &days_i)) {                 // Input validation
            fprintf(stderr, "Invalid input, exiting program...\n"); 
            return EXIT_FAILURE;
        }  
        printf("The interest charge is: %.2f\n", principal_f * rate_f * days_i / 365.0f);   // Calculate and display interest
        puts("\nEnter loan principal (-1 to end):");                                        // Prompt for next principal
        if (VALID_INPUT != scanf("%f", &principal_f)) {                                   // Input validation
            fprintf(stderr, "Invalid input, exiting program...\n");
            return EXIT_FAILURE;
        } 
    }
    puts("Exiting program...");                                        // Exit message
    return EXIT_SUCCESS;                                               // Successful program termination
}