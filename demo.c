#include<stdio.h>
#include<math.h>
void main()
{
    int num,digit1,digit2,digit3,sum;
    printf("entert the number");
    scanf("%d",&num);
    digit1=num%10;
    num=num/10;
    digit2=num%10;
    digit3=num/10;
    sum=digit1+digit2+digit3;
    printf("%d",sum);
return 0;
}
