#include<stdio.h>
int main()
{
	char alph;
	printf("enter any alphabet");
	scanf("%c",&alph);
	if(alph=='a' || alph=='e' || alph=='i' || alph=='o' || alph=='u')
	{
		printf("alphabet %c is a vowel",alph);
	}
	else
	{
		printf("alphabet %c is a consonant",alph);
	}
}
	