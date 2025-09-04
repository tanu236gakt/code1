#include<stdio.h>
int main()
{
    int a,b,c,i;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if (a > b)
    {
        i = a;
    }
    else{
        i = b;
    }
    while(i <= c)
    {
        if (i % a == 0 && i % b == 0)
        {
        printf("LCM of %d and %d is:%d",a,b,i);
        break;
        
        }
        i+=1;
    }
    return 0;
}