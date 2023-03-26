#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,larger;
	printf("enter the two numbers");
	scanf("%d%d",&a,&b);
	larger=(a>b)?a:b;
	printf("%d",larger*larger*larger);
}