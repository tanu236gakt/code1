#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    i = 2;
    int count = 0;
    while (i <= n-1){
        if ( n % i == 0)
        {
            printf("Not prime");
            break;
        }
      i = i + 1;
    }
    if (i== n){
printf("%d is prime",n);
    }
return 0;
} 