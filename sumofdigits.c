 #include<stdio.h>
 int main ()
 {
    int n,sum=0,r;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n > 0)
    {
        r = n % 10;
        n = n/10;
        sum = sum + r;
    }
    printf("Sum of digits is %d.",sum);
    return 0;
 }