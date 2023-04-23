#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	int i,j=0;
	printf("\nEnter String:");
	gets(a);
	for(i=strlen(a)-1;i>=0;i--)
	{
		b[j]=a[i];
		j++;
	}
	b[j]='\0';
	printf("\nReverse of the string=%s",b);
	return 0;
}
