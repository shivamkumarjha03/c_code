#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\nEnter Number:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	printf("\nMax number=%d",a);
	else if(b>a&&b>c)
	printf("\nMax Number=%d",b);
	else
	printf("\nMax Number=%d",c);
	return 0;
}
