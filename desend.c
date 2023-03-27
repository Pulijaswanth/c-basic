#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("enter the three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		if(b>c)
		{
			printf("the descending order is %d,%d,%d",a,b,c);
		}
	}
		if(b>a && b>c)
	{
		if(a>c)
		{
			printf("the descending order is %d,%d,%d",b,a,c);
		}
	}
		if(b>c && b>a)
	{
		if(c>a)
		{
			printf("the descending order is %d,%d,%d",b,c,a);
		}
	}
	if(c>b && c>a)
	{
		if(b>a)
		{
			printf("the descending order is %d,%d,%d",c,b,a);
		}
	}
		if(c>b && c>a)
	{
		if(a>b)
		{
			printf("the descending order is %d%d%d",c,a,b);
		}
		}
		if(a>b && a>c)
	{
		if(c>b)
		{
			printf("the descending order is %d%d%d",a,c,b);
		}
	}
		}