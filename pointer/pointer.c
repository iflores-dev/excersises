#include <stdio.h>


void cube(int *);

int main (void){

    int number = 5;
    cube(&number);
    printf("%d", number);
    return 0;
}

void cube (int *pNumber){
    *pNumber = *pNumber * *pNumber * *pNumber; 
}
