#include<stdio.h>
void add(void); //function prototype
int main()
{
	add(); //function call
	return 0;
}
void add(void) //function definition
{
	int a,b,sum;
	printf("\nEnter Two Numbers:");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("\nAddition=%d",sum);
}	
