#include<stdio.h>
#include<math.h>
void main()
{
    int s,a,b,c,area;
    printf("enter the sides of a triangle");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%d",area);
return 0;
}