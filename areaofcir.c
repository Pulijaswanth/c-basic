#include<stdio.h>
#include<math.h>
int main()
{
	float r,circumference,area;
	printf("enter the value of radius");
	scanf("%f",&r);
	area=(3.1428)*r*r;
	circumference=2*(3.1428)*r;
	printf("area is %f and circumference is %f",area,circumference);
}