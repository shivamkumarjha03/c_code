#include<stdio.h>
int add(int,int);
int main()
{
	int a,b,sub;
	printf("\nEnter Two Numbers:");
	scanf("%d%d",&a,&b);
	sub=minu(a,b);
	printf("\nSubstraction=%d",sub);
	return 0;
}
int minu(int a,int b)
{
	int c;
	c=a-b;
	return (c);
}
