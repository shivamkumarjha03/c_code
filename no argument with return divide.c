#include<stdio.h>
int div(void); //function prototype
int main()
{
	int division;
	division div(); //function call
	printf("\nDivision of two numbers=%d",div);
	return 0;
}
int div()//function defition
{
	int a,b,c;
	printf("\nEnter Two numbers:");
	scanf("%d%d",&a,&b);
	c=a/b;
	return (c);
}
	
