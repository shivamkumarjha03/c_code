#include<stdio.h>
int main()
{
	int age;
	printf("\nEnter Age:");
	scanf("%d",&age);
	if(age>=18)
	printf("\nEligible to vote");
	else
	printf("\nNot eligible to vote");
	return 0;
}
