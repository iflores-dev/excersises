/*
 =======================================================================================
 Name        : 3_17.c
 Author      : Isaac Flores
 Version     :
 Copyright   : Your copyright notice
 Description : (Sales-Commission Calculator) One large chemical company pays its 
                salespeople on a commission basis. The salespeople receive $200 per 
                week plus 9% of their gross sales for that week. For example, a 
                salesperson who sells $5000 worth of chemicals in a week receives $200 
                plus 9% of $5000, or a total of $650. Develop a program that will use 
                scanf to input each salesperson’s gross sales for last week and calculate 
                and display that salesperson’s earnings.
 ========================================================================================
 */
// Include necessary headers
#include <stdio.h>
#include <stdlib.h>
// Define constants
#define COMMISSION_RATE 0.09f
#define BASE_SALARY 200.0f
#define VALID_INPUT 1
// Main function
int main(void) {
    // Prompt user for sales input
    puts("Enter sales in dollars (-1 to end)");
    float sales_f = 0.0f;                                       // Variable to hold sales input   
    if (VALID_INPUT != scanf_s("%f", &sales_f)) {               // Input validation
        fprintf(stderr, "Invalid input, exiting program...");   // Error message
        return EXIT_FAILURE;                                    // Exit program with failure code
    }
    // Loop until sentinel value is entered
    while (EOF != sales_f) {
        // Calculate and display salary
        printf_s("Salary is: $%.2f\n", BASE_SALARY + (COMMISSION_RATE * sales_f));
        // Prompt for next input
        puts("Enter sales in dollars (-1 to end)");
        if (VALID_INPUT != scanf_s("%f", &sales_f)) {               // Input validation
            fprintf(stderr, "Invalid input, exiting program...");   // Error message
            return EXIT_FAILURE;                                    // Exit program with failure code
        }
    }
    puts("Exiting program...");                 // Exit message
    return EXIT_SUCCESS;                        // Exit program with success code
}
