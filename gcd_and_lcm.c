#include<stdio.h>

int main () {
  int num_1, num_2, temp_1, temp_2, rem, GCD, LCM;

  printf("Enter Two Numbers: ");
  scanf("%d %d", &num_1, &num_2);

  temp_1 = num_1;
  temp_2 = num_2;

  while(temp_2!=0) {
    rem = temp_1%temp_2;
    temp_1 = temp_2;
    temp_2 = rem;
  }

  GCD = temp_1;
  LCM = (num_1 * num_2) / GCD;

  printf("\n\nThe *GCD* is:- %d\n\n", GCD);
  printf("The *LCM* is:- %d\n\n", LCM);

  return 0;
}
