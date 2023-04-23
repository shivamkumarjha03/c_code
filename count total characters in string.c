#include<stdio.h>
int main()
{
	char a[10000];
	int i=0;
	printf("\nEnter Your Name:");
	gets(a);
	while(a[i]!='\0')
	i++;
	printf("\nTotal Number of characters=%d",i);
	return 0;
}
