#include<stdio.h>
int main()
{
	int age;
	printf("Enter age:");
	scanf("%d",&age);
	if (age<=12)
	  printf("Child\n");
	else if(age<=19)
	   printf("Teen\n");
	else if(age<=45)
	   printf("Adult");
	else 
	   printf("Senior");
	return 0;
	}