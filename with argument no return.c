#include<stdio.h>
void mul(int,int); //function prototype
int main()
{
	int a,b;
	printf("\nEnter Two Numbers:");
	scanf("%d%d",&a,&b);
	mul(a,b); //function call
	return 0;
}
void mul(int a,int b) //function definition
{
	int mul;
	mul=a*b;
	printf("\nMultiplication=%d",mul);
}
