#include<stdio.h>
int main()
{
	char a[50],b[50];
	int i=0;
	printf("\nOriginal String:");
	gets(a);
	while(a[i]!='\0')
	{
		b[i]=a[i];
		i++;
	}
	printf("\nCopied String is=%s",b);
	return 0;
}
