#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf("\nEnter Values of matrix:");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		printf("\nEnter number:");
		scanf("%d",&a[i][j]);
	}
	printf("\nThe matrix is:");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		printf("%d\t",a[i][j]);
	}
	printf("\nTranspose of matrix is:");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		printf("%d\t",a[j][i]);
	}
	return 0;
}
