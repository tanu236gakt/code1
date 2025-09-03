#include<stdio.h>
#define PI 3.141592
int main(){
    float r;
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    float area = PI*r*r;
    printf("The area of the circle of radius %f is: %f.",r,area);
    return 0;
}