#include<stdio.h>
#include<math.h>
void main()
{
    int p,t,r,si;
    printf("enter the principle amount");
    scanf("%d",&p);
    printf("enter the time in years");
    scanf("%d",&t);
    printf("enter the state of intrest");
    scanf("%d",&r);
    si=(p*t*r)/100;
    printf("the simple intrest is %d",si);
return 0;
}
