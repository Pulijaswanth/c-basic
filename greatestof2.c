#include<stdio.h>
int main()
{
	int num1,num2,greatest;
	printf("enter the two numbers");
	scanf("%d%d",&num1,&num2);
	greatest=(num1>num2)?num1:num2;
	printf("between %d and %d,%d is the greatest",num1,num2,greatest);
	
}