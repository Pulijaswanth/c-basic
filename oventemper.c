#include<stdio.h>
#include<math.h>
int main()
{
	int reading;
	printf("enter the reading of the oven");
	scanf("%d",&reading);
	if(reading==2 || reading==3)
	{
		printf("temperature is 500");
	}
	else if(reading==4)
	{
		printf("temperature is 600");
	}
	else if(reading==5 || reading==6 || reading==7)
	{
		printf("temperature is 700");
	}
	else
	{
		printf("temperature is 300");
	}
		}