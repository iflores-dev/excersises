#include <stdio.h>

int main() {
    int a = 5, b;

    b = a++;  // b = 5, luego a = 6
    printf("Post-incremento: b = %d, a = %d\n", b, a);

    a = 5;
    b = ++a;  // a = 6, luego b = 6
    printf("Pre-incremento: b = %d, a = %d\n", b, a);

    return 0;
}