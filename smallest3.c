#include<stdio.h>
int main()
{
	int num1,num2,num3,smallest;
	printf("enter the two numbers");
	scanf("%d%d%d",&num1,&num2,&num3);
	smallest=(num1<num2)?num1:num2;
	smallest=(smallest<num3)?smallest:num3;
	printf("smallest is %d",smallest);
}