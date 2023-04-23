#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	int i,j=0,flag=0;
	printf("\nEnter String:");
	gets(a);
	for(i=strlen(a)-1;i>=0;i--)
	{
		b[j]=a[i];
		j++;
	}
	b[j]='\0';
	for(i=0;i<=strlen(a);i++)
	{
		if(a[i]!=b[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("\nPalindrome string");
	else
	printf("\nNot palindrome string");
	return 0;
}
