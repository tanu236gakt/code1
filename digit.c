 #include<stdio.h>
 int main ()
 {
    int n,cnt=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n > 0)
    {
        n = n/10;
        cnt++;
       // n--;
    }
    printf("Number of digits is %d.",cnt);
    return 0;
 }