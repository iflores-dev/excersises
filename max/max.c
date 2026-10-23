#include <stdio.h>
#include <math.h>
#include "comparison.h"


int main (void){

    int n1 = 0;
    int n2 = 0;
    int n3 = 0;

    printf("%s", "Dame tres valores");
    scanf("%d%d%d", &n1, &n2, &n3);

    printf("Valor maximo: %d", min(n1, n2, n3));

    return 0;

}

