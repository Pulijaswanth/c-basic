#include<stdio.h>
#include<string.h>
int main()
{
	char name[10],group[10],branch[10],section[10];
	int sicno;
	printf("enter name");
	scanf("%s",&name);
    printf("enter group");
	scanf("%s",&group);
	printf("enter branch");
	scanf("%s",&branch);
	printf("enter section");
	scanf("%s",&section);
	printf("enter sicno");
	scanf("%d",&sicno);
	printf("name is %s,group is %s,branch is %s,section is %s,sicno is %d",name,group,branch,section,sicno);
		
}