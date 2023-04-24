#include<stdio.h>
int main()
{
	int a,b,*p,*q,c;
	printf("\nEnter Number:");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	c=*p+*q;
	printf("\nAddition=%d",c);
	return 0;
}
