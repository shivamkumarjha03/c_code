#include<stdio.h>
int main()
{
	int a[10],i,freq=0,key;
	for(i=0;i<10;i++)
	{
		printf("\nEnter Number:");
		scanf("%d",&a[i]);
	}
	printf("\nEnter the number which you want to find the frequency:");
	scanf("%d",&key);
	for(i=0;i<10;i++)
	if(a[i]==key)
	freq++;
	printf("\nFrequency of %d is %d times",key,freq);
	return 0;
}
