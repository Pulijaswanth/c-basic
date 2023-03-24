#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,avg;
	printf("enter the marks achived in 5 subjects");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	avg=(m1+m2+m3+m4+m5)/5;
	if(avg>=90)
	{
		printf("O grade");
	}
	else if(avg>=70 && avg<90)
	{
		printf("E grade");
	}
	else if(avg>=60 && avg<70)
	{
		printf("A grade");
	}
	else
	{
		printf("B grade");
	}
}