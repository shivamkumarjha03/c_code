#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=0,pro=1;
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
	for(j=0;j<3;j++)
	{
		if(a[i][j]%2==0)
		sum=sum+a[i][j];
		else
		pro=pro*a[i][j];
	}
	printf("\nSum=%d and Product=%d",sum,pro);
	return 0;
}
