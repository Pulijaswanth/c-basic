#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,x;
	printf("enter all the four numbers");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	x=(a-b)/(c-d);
	printf("x is %d",x);
	if((c-d)==0)
	{
		printf("denominator cannot be zero");
	}
}