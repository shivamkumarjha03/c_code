#include<stdio.h>
int main()
{
	int a[3][3],i,j,key;
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
	printf("\nEnter Number to search:");
	scanf("%d",&key);
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		if(a[i][j]==key)
		{
			printf("Element found at a[%d][%d] position",i,j);
			return 0;
		}
	}printf("\nElement not found");
	return 0;
}


