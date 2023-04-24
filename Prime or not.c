#include<stdio.h>
int main()
{
	int a,n,*p,count=0;
	printf("\nEnter Number:");
	scanf("%d",&a);
	p=&a;
	for(n=1;n<=*p;n++)
	{
		if(*p%n==0)
		count++;
	}
	if(count==2)
	printf("\nPrime Number");
	else
	printf("\nNot prime number");
	return 0;
}
