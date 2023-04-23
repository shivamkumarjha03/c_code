#include<stdio.h>
int main()
{
	char a[10000];
	int i=0,word=1;
	printf("\nEnter Name:");
	gets(a);
	while(a[i]!='\0')
	{
		if(a[i]==' ')
		word++;
		i++;
	}
	printf("\nNumber of words=%d",word);
	return 0;
}
