#include<stdio.h>

int main () {
   int num, i, count = 0;

   printf("Enter any Number: ");
   scanf("%d", &num);

   for(i = 2; i <= num / 2; i++) {
      if(num % i == 0) {
         count++;
         break;
      }
   }

   if(count == 0 && num != 1) {
      printf("\n\n%d __ is a prime number.\n\n", num);
   }

   else {
      printf("\n\n%d __ is not a prime number.\n\n", num);
   }

   return 0;
}
