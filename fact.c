#include<stdio.h>
int main ()
{
    int i,n,fact;
    printf("Enter a number:");
    scanf("%d",&n);
    i = 1;
    fact= 1;
    while (i <=n )
    {
        fact = fact *i;
        i +=1;
        }
    printf("Factorial of %d number is: %d ",n,fact);
    return 0;
}