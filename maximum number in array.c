#include<stdio.h>
int main()
{
	int a[10],i,max;
	for(i=0;i<10;i++)
	{
		printf("\nEnter Number:");
		scanf("%d",&a[i]);
	}
	max=a[i];
	for(i=0;i<10;i++)
	if(a[i]>max)
	max=a[i];
	printf("\nMax numner is %d",max);
	return 0;
}
