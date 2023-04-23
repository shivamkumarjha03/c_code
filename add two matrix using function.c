#include<stdio.h>
void addmat(int [10][10],int [10][10],int,int); //function prototype
int main()
{
	int a[10][10],b[10][10],row,column,i,j;
	printf("\nEnter Number of rows and columns:");
	scanf("%d%d",&row,&column);
	for(i=0;i<row;i++)
	for(j=0;j<column;j++)
	{
		printf("\nEnter Number of first matrix:");
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<row;i++)
	for(j=0;j<column;j++)
	{
		printf("\nEnter Number of second matrix:");
		scanf("%d",&b[i][j]);
	}
	addmat(a,b,row,column); //function call
	return 0;
}
void addmat(int a[10][10],int b[10][10],int row,int column) //function definition
{
	int c[10][10],i,j;
	for(0;i<row;i++)
	for(j=0;j<column;j++)
	c[i][j]=a[i][j]+b[i][j];
	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<column;j++)
		printf("%d\t",c[i][j]);
	}
}
