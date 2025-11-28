/*
 =======================================================================================
 Name        : 3_19.c
 Author      : Isaac Flores
 Version     :
 Copyright   : Your copyright notice
 Description : (Salary Calculator) Develop a program that will determine the gross pay 
                for each of several employees. The company pays “straight time” for the 
                first 40 hours worked by each employee and pays “time-and-a-half” for all 
                hours worked in excess of 40 hours. You’re given a list of the company’s 
                employees, the number of hours each worked last week and each employee’s 
                hourly rate. Your program should use scanf to input this information for 
                each employee and determine and display the employee’s gross pay.
 ========================================================================================
 */

// Include necessary headers
#include <stdio.h>
#include <stdlib.h>
// Define constants
#define VALID_INPUT 1           // Constant for valid input
#define OVERTIME_RATE 1.5f      // Overtime pay rate multiplier
#define STANDARD_HOURS 40.0f    // Standard hours before overtime
#define ZERO 0.0f               // Constant for zero

int main(void) {
    int a = 10;
    int *a_ptr = &a;
    puts("Enter # of hours worked (-1 to end):");
    float hoursWorked_f = ZERO;                              // Variable to store hours worked
    float *hoursWorked_f_ptr = &hoursWorked_f;            // Pointer to hours worked
    if (VALID_INPUT != scanf("%f", &hoursWorked_f)) {        // Input validation
        fprintf(stderr, "Invalid input, exiting program...\n"); 
        return EXIT_FAILURE;    // Exit on invalid input
    }
    while (EOF != hoursWorked_f) {                             // Loop until EOF or sentinel value 
        puts("Enter hourly rate of the employee ($00.00):");   // Prompt for hourly rate
        float hourlyRate_f = ZERO;                             // Variable to store hourly rate
        if (VALID_INPUT != scanf("%f", &hourlyRate_f)) {      // Input validation
            fprintf(stderr, "Invalid input, exiting program...\n"); 
            return EXIT_FAILURE;
        }
       float *hourlyRate_f_ptr = &hourlyRate_f;          // Pointer to hourly rate 
       float grossPay_f = ZERO;  
       float *grossPay_f_ptr = &grossPay_f;                              // Variable to store gross pay
        if (hoursWorked_f > STANDARD_HOURS) {                           // Check for overtime
            grossPay_f = (STANDARD_HOURS * hourlyRate_f) + 
                          ((hoursWorked_f - STANDARD_HOURS) * hourlyRate_f * OVERTIME_RATE);
        } else {
            grossPay_f = hoursWorked_f * hourlyRate_f;
        }
        printf("Gross pay is: $%.2f\n", grossPay_f);           // Display gross pay
        puts("\nEnter # of hours worked (-1 to end):");       // Prompt for next hours worked
        if (VALID_INPUT != scanf("%f", &hoursWorked_f)) {     // Input validation
            fprintf(stderr, "Invalid input, exiting program...\n"); 
            return EXIT_FAILURE;
        }
    }
    return EXIT_SUCCESS;
}