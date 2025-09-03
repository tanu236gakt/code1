#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if (n<0)
	  printf("Number is negative\n");
	else if(n==0)
	   printf("Number is zero");
	else 
	   printf("Number is positive");
	return 0;
	}