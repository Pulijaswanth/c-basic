#include<stdio.h>
 int main()
{
	int num1,num2,num3;
	printf("enter the numbers");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1==num2 && num2==num3)
	{
		printf("%d %d and %d are equal",num1,num2,num3);
	}
	else if(num1>num2 && num1>num3)
		{
			printf("%d is greater",num1);
		}
		else if(num3>num1 && num3>num2)
		{
			printf("%d is greater",num3);
		}
		else
		{
			printf("%d",num2);
		}
	}
	