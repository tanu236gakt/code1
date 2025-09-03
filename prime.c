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
            count+=1;
        }
      i = i + 1;
    }
    if (count ==0)
    {    
       printf("%d is prime",n);
    }  
    else{
        printf("%d is not prime.",n);
    }
return 0;
} 