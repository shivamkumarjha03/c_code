#include<stdio.h>
void prime(int); //function prototype
int main()
{
	int i;
	printf("\nEnter Number:");
	scanf("%d",&i);
	prime(i); //function call
	return 0;
}
void prime(int i) //function definition
{
	int x,count=0;
	for(x=1;x<=i;x++)
	{
		if(i%x==0)
		count++;
	}
	if(count==2)
	printf("\nNumber is prime");
	else 
	printf("\nNot prime");
}
	
