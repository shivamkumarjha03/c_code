#include<stdio.h>
int main()
{
	char a[1000];
	int i=0;
	printf("\nEnter Your Name:");
	gets(a);
	while(a[i]!='\0')
	{
		printf("\n%c",a[i]);
		i++;
	}
	return 0;
}
