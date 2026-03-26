// fig05_09.c
// Recursive factorial function.
#include <stdio.h>
#include <stdlib.h>

unsigned long long int factorial(int number); 

int main(void) {
   // calculate factorial(i) and display result
   for (int i = 0; i <= 21; ++i) {
      printf("%d! = %llu\n", i, factorial(i));
   } 
   return EXIT_SUCCESS;
} 

// recursive definition of function factorial  
unsigned long long int factorial(int number) { 
   if (number <= 1) { // base case             
      return 1;                                
   }                                           
   else { // recursive step                    
      return (number * factorial(number - 1)); 
   }                                           
}                                              

