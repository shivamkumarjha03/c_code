#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=0;
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
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	sum=sum+a[i][j];
	printf("\nSum of rows %d is %d",i+1,sum);
	}
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	sum=sum+a[j][i];
	printf("\nSum of columns %d is %d",i+1,sum);
	return 0;
	}
}
