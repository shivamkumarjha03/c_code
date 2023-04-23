#include<stdio.h>
int main()
{
	int a[3][3],i,j,flag=0;
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
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		if((i>j)&&(a[i][j]!=0))
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	printf("\nNot upper triangular");
	else
	printf("\nUpper Triangular");
	return 0;
}
