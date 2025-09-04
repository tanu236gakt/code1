#include<stdio.h>
int main()
{
    int a,b,hcf;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if (a < b)
    {
        hcf = a;
    }
    else{
        hcf = b;
    }
    while(hcf > 0)
    {
        if (a % hcf == 0 && b % hcf == 0)
        {
        printf("HCF of %d and %d is:%d",a,b,hcf);
        break;
        }
        hcf -= 1;
    }
    return 0;
}