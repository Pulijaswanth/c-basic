#include<stdio.h>
#include<math.h>
int main()
{
	float x,previous,present;
	printf("enter the previous\n");
	scanf("%f",&previous);
	printf("enter the present\n");
	scanf("%f",&present);
	x=present-previous;
	if(x<=100)
	{
		x=x*(2.40);
		printf("the bill is %f",x);
	}
	if(x>=100 && x<=200)
	{
		x=x*(3.50);
		printf("the bill is %f",x);
		}
		if(x>=200 && x<=300)
		{
			x=x*(4.20);
			printf("the bill is %f",x);
		}
}