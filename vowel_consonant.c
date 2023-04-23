#include<stdio.h>
int main()
{
	char a[500000];
	int i=0,vol=0,cons=0;
	printf("\nEnter string:");
	gets(a);
	while(a[i]!='\0')
	{
		if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
		{
			if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
			vol++;
			else
			cons++;
			i++;
		}
	}
	printf("\nTotal Number of vowels=%d and Total number of consonants=%d",vol,cons);
	return 0;
}
