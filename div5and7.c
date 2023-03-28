#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	if(a%5==0 && a%7==0)
	{
		printf("%d is divisible by 5 and 7",a);
	}
	else
	{
		printf("%d is not divisible by 5 and 7",a);
	}
}