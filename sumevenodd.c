#include<stdio.h>
int main()
{   
    int even,odd,n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    i = 0;
    even=0;
    odd = 0;

    for (i = 0;i <=n;i++)
    {
        if ( i % 2==0)
         {
            even +=i;
         }
         else{
            odd += i;
         }
    }
    printf("The sum of even numbers from 1 to %d is %d",n,even);
    printf("\nThe sum of odd numbers from 1 to %d is %d",n,odd);
    return 0;
}