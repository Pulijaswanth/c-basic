#include<stdio.h>
#include<math.h>
int main()
{
	float  basicsalary,grosssalary,da,conveyance,medical,hra;
	printf("enter the salry of the person");
	scanf("%f",&basicsalary);
    da=(0.6)*basicsalary;
    printf("the DA=%f\n",da);
    hra=(0.15)*basicsalary;
    printf("the HRA=%f\n",hra);
    conveyance=(0.15)*basicsalary;
    printf("the Conveyance=%f\n",conveyance);
    medical=(0.10)*basicsalary;
    printf("the Medical=%f\n",medical);
    grosssalary=da+hra+conveyance+medical+basicsalary;
    printf("the gross salary=%f\n",grosssalary);
}