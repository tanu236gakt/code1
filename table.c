#include<stdio.h>
int main()
{
    int i,n,r;
    printf("Enter the number:");
    scanf("%d",n);
    i = 1;
    while (i <= 10)
   {
    r= n * i;
    printf("%d x %d = %d \n",n,i,r);
    i = i + 1;
   }
return 0;
}