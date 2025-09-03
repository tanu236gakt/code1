#include<stdio.h>
int main ()
{
  int d;
  float bill;
  printf("Enter the distance in kM :");
  scanf("%d",&d);
  if (d <= 10)
  {
    bill = d * 11 ;
  }
  else if (d <= 100)
   {
    bill = 10 * 11 + ( d - 10) * 10; 
   }
   else
    {
    bill = 10 * 11 + 90 * 10 + (d - 100) * 9;
   }
   printf("The total fair is: %.2f ",bill);
    return 0;
}