#include<stdio.h>
int main()
{
    int unit;
	float fbill,r;
    printf("Enter the unit");
    scanf("%d",&unit);
    if (unit<=50)
    {
         r=unit*0.5;
    }
     else if (unit<=200)
    {
         r=50*0.5 + (unit-50)*0.75;
       
    }
    else if (unit<=450)
    {
        r=50*0.5 + 150*0.75 + (unit-200)*1.20;
       
    }
    else 
    {
         r=50*0.5 + 150*0.75 + 250*1.20 + (unit-450)*1.5;
        
    }
    printf("The bill before surcharge is: %f",r);
    fbill =r+( 0.2 * r);
    printf("\nThe total bill is: %f",fbill);
	return 0;
	}