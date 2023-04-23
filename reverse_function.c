#include<stdio.h>
void reverse(int); //function prototype
int main()
{
	int i;
	printf("\nEnter Number to find reverse:");
	scanf("%d",&i);
	reverse(i); //function call
	return 0;
}
void reverse(int i) //function definition
{
	int rev=0;
	while(i>0)
	{
		rev=(rev*10)+(i%10);
		i=i/10;
	}
	printf("\nReverse=%d",rev);
	
}
