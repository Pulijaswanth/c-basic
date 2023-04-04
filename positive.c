#include<stdio.h>
 int main()
{
	int num1,num2;
	printf("enter the numbers");
	scanf("%d%d",&num1,&num2);
	if(num1==num2)
	{
		printf("%d and %d are equal",num1,num2);
	}
	else
	{
		if(num1>num2)
		{
			printf("%d is greater",num1);
		}
		else
		{
			printf("%d is greater",num2);
		}
	}
	}