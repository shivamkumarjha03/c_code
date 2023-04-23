#include<stdio.h>
int main()
{
	int a[3][3],i,j,even=0,odd=0;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		printf("\nEnter Number:");
		scanf("%d",&a[i][j]);
	}
	printf("\nArray elements are:");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		printf("%d/\t",a[i][j]);
	}
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		if(a[i][j]%2==0)
		even++;
		else 
		odd++;
	}
	printf("\nTotal even=%d and Total odd=%d",even,odd);
	return 0;
}
