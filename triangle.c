#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the 3 sides of a triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if (a==b && b==c )
	  printf("Triangle is equilateral.\n");
	else if(a==b || b==c || a==c)
	   printf("Triangle is Isosceles\n");
	else 
	   printf("Triangle is Scalene");
	return 0;
	}