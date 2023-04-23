#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("\nEnter Value of first matrix:");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		printf("\nEnter Value of 2D array:");
		scanf("%d",&a[i][j]);
	}
	printf("\nEnter Values of second matrix:");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		printf("\nEnter Values of 2D array:");
		scanf("%d",&b[i][j]);
	}
	printf("\nFirst matrix is:");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		printf("%d\t",a[i][j]);
	}
	printf("\nSecond Matrix is:");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		printf("%d\t",b[i][j]);
	}
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	
		c[i][j]=a[i][j]+b[i][j];
		printf("\nAddition of matrix is:");
		for(i=0;i<3;i++)
		{
			printf("\n");
			for(j=0;j<3;j++)
			printf("%d\t",c[i][j]);
		}
		return 0;
	
}
