
#include <stdio.h>

int main(void) {
   enum week { Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
   enum week today = Sunday;

   printf("Day %d\n", today);
   return 0;
}