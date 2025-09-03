#include<stdio.h>
int main ()
{
    int i,even,odd;
    i=1;
    even = 0;
    odd =  0;
    while ( i <= 20)
    {
        if (i%2 ==0)
       { 
        even= even+i;
       }
        else{
          odd +=i;
       }

    i = i +1;
    }
    printf("Sum  of even numbers b/w 1-20 is; %d",even);
    printf("\nSum  of odd numbers b/w 1-20 is; %d",odd);
    return 0;
}