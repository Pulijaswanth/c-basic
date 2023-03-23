#include<stdio.h>
 int main()
 {
 	int num1,num2;
 	scanf("%d%d",&num1,&num2);
 	printf("before swapping %d and %d\n",num1,num2);
 	num1=num1+num2;
 	num2=num1-num2;
 	num1=num1-num2;
 	printf("after swapping %d and %d",num1,num2);
 }