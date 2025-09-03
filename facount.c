#include<stdio.h>
int main ()
{
    int i,n,even,odd;
    even = 0;
    odd = 0;
    printf("Enter a number:");
    scanf("%d",&n);
    i=1;
    while ( i <= n)
    {
    if (n%i == 0)
        {
        if  (i%2 ==0){
                even = even + i;
        }
        else{
            odd = odd + i;
        }
    }
    i = i+1;
    }
    printf("The sum of even factors of %d is :%d",n,even);
    printf("\nThe sum of odd factors of %d is :%d",n,odd);
    return 0;
}