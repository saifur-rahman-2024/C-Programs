#include<stdio.h>

int main () {

   int n1=0, n2=1, n3, num, count;

   printf("Enter the number of terms: ");
   scanf("%d", &num);

   printf("The series is:\n\n%d\n%d\n", n1, n2);

   for(count = 3; count <= num; count++) {
      n3 = n1 + n2;

      printf("%d\n", n3);

      n1 = n2;
      n2 = n3;
   }
}
