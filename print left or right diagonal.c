#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		printf("\nEnter Number:");
		scanf("%d",&a[i][j]);
	}
	printf("\nArray Elements are:");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		printf("%d\t",a[i][j]);
	}
	printf("Left diagonal is:");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		if(i==j)
		printf("%d\t",a[i][j]);
	}
	printf("Right diagonal is:");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		if(i+j==2)
		printf("%d\t",a[i][j]);
	}
	return 0;
}
