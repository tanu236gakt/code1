 #include<stdio.h>
 int main ()
 {
    int n,rev=0,r,original;
    printf("Enter a number:");
    scanf("%d",&n);
    original = n;
    while(n > 0)
    {
        r = n % 10;
        n = n/10;
        rev = rev*10 +r;
    }
    printf("Reverse %d \n",rev);
   if (rev == original)
   {
    printf("Palindrome.");
   }
    else
    {
        printf("Not a palindrome.");
    }
 return 0;
 } 