#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j,flag=0;
	printf("\nEnter Values of first matrix:");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		printf("\nEnter Number:");
		scanf("%d",&a[i][j]);
	}
	printf("\nEnter values of second matrix:");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		printf("\nEnter Number:");
		scanf("%d",&b[i][j]);
	}
	printf("\nFirst Matrix is:");
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
	{
		if(a[i][j]!=b[i][j])
		flag=1;
	}
	if(flag==0)
	printf("\nMatrix is identical");
	else 
	printf("Not identical");
	return 0;
}
