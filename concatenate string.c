#include<stdio.h>
int main()
{
	char a[1000],b[1000],c[20000];
	int i=0,j=0;
	printf("\nEnter First String:");
	gets(a);
	while(a[i]!='\0')
	{
		c[i]=a[i];
		i++;
	}
	printf("Enter Second string:");
	gets(b);
	while(b[j]!='\0')
	{
		c[i]=b[j];
		i++;
		j++;
	}
	c[i]='\0';
	printf("\nConcatenated string is=%s",c);
	return 0;
}
