#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,arearect,r;
	printf("enter the l and b");
	scanf("%f%f",&a,&b);
	arearect=a*b;
	r=sqrt(arearect/3.14);
	printf("radius of the circle is %f",r);
}