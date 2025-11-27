/*
 =======================================================================================
 Name        : 3_17.c
 Author      : Isaac Flores
 Version     :
 Copyright   : Your copyright notice
 Description : (Credit-Limit Calculator) Develop a C program that will
 	 	 	 	determine whether a department-store customer has exceeded
 	 	 	 	the credit limit on a charge account. For each customer, the
 	 	 	 	following facts are available:
					a) Account number
					b) Balance at the beginning of the month
					c) Total of all items charged by this customer this month
					d) Total of all credits applied to this customer's account this month
					e) Allowed credit limit
				The program should use scanf to input each fact, calculate the
				new balance (= beginning balance + charges – credits), and
				determine whether the new balance exceeds the customer's credit
				limit. For those customers whose credit limit is exceeded, the
				program should display the customer's account number, credit
				limit, new balance and the message “Credit limit exceeded.”
 ========================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define VALID_INPUT 1

int main(void) {

	setbuf(stdout, NULL);
	//a) Account number
	puts("Enter account number (-1 to end):");
	int accountNumber_i = 0;
	if (VALID_INPUT != scanf_s("%d", &accountNumber_i)){
		fprintf(stderr, "Invalid Input");
		return EXIT_FAILURE;
	}
	while(accountNumber_i != EOF){
		//b) Balance at the beginning of the month
		puts("Enter beginning balance:");
		float beginBalance_f = 0.0;
		if (VALID_INPUT != scanf_s("%f", &beginBalance_f)){
			fprintf(stderr, "Invalid Input");
			return EXIT_FAILURE;
		}
		//c) Total of all items charged by this customer this month
		puts("Enter total charges:");
		float totalCharges_f = 0.0;
		if (VALID_INPUT != scanf_s("%f", &totalCharges_f)){
			fprintf(stderr, "Invalid Input");
			return EXIT_FAILURE;
		}
		//d) Total of all credits applied to this customer's account this month
		puts("Enter total credits:");
		float totalCredits_f = 0.0;
		if (VALID_INPUT != scanf_s("%f", &totalCredits_f)){
			fprintf(stderr, "Invalid Input");
			return EXIT_FAILURE;
		}
		//e) Allowed credit limit
		puts("Enter credit limit:");
		float creditLimit_f = 0.0;
		if (VALID_INPUT != scanf_s("%f", &creditLimit_f)){
			fprintf(stderr, "Invalid Input");
			return EXIT_FAILURE;
		}
		//Calculate the new balance (= beginning balance + charges – credits)
		float newBalance_f = beginBalance_f + totalCharges_f - totalCredits_f;

		// Display Account.
		printf_s("Account: %d\n", accountNumber_i);
		// Display Credit limit.
		printf_s("Credit limit: %.2f\n", creditLimit_f);
		// Display Balance.
		printf_s("Account: %.2f\n", newBalance_f);

		//Determine whether the new balance exceeds the customer's credit limit.
		if (newBalance_f > creditLimit_f){
			puts("Credit limit exceeded.\n");
			return EXIT_FAILURE;
		}
		puts("Enter account number (-1 to end):");
		if (VALID_INPUT != scanf_s("%d", &accountNumber_i)){
			fprintf(stderr, "Invalid Input");
			return EXIT_FAILURE;
		}
	}
	return EXIT_SUCCESS;
}
