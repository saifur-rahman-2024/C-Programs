#include<stdio.h>

int main()
{
    int i,j,n;

    printf("Enter the last number that you want: ");
    scanf("%d",&n);

    printf("\n\nPrime numbers are:- ");
    for(i=2;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }

       if(c==2)
        {
            printf("%d, ",i);
        }
    }
    printf("\n\n");

    return 0;
}
