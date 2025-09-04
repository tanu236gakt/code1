#include<stdio.h>
int main()
{
    int n,i,fact;
    i = 1;
    fact = 1;
    printf("Enter a number:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        fact *= i;
     }
     printf("Factorial of %d is: %d",n,fact);
     return 0;
}