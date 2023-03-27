#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,large,largest;
	printf("enter the three sides of a triangle");
	scanf("%d%d%d",&a,&b,&c);
	large=(a>b)?a:b;
	largest=(large>c)?large:c;
	if(a+b>largest || b+c>largest)
	{
		printf("It is a triangle\n");
		}	
		else 
		{
			printf("it is not a triangle");
		}
		if(a==b && b==c)
		{
			printf("it is a equilateral triangle");
		}
		else if(a==b || a==c)
		{
			printf("it is a isosceles");
		}
		else if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b)
		{
			printf("it is a right angled triangle");
		}
		if(c+b==a || c+a==b || a+b==c)
		{
			printf("it is a scalar triangle");
		}
}