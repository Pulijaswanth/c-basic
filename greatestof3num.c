#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    printf("enter three numbers");
    Scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d",a);
    }
    if(b>a && b>c)
    {
        printf("%d",b);
    }
    if(c>b && c>a)
    {
        printf("%d",c);
    }
}