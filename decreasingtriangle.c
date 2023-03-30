#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,num,k,temp;
	printf("enter the number");
	scanf("%d",&num);
	temp=num;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=temp;j++)
		{
			printf(" *");
		}
		temp--;
		printf("\n");
	}
}