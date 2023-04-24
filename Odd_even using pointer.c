#include<stdio.h>
int main()
{
	int a,*p;
	printf("\nEnter Number:");
	scanf("%d",&a);
	p=&a;
	if(*p%2==0)
	printf("\nNumber is even");
	else
	printf("\nNumber is odd");
	return 0;
}
