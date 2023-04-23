#include<stdio.h>
int main()
{
	int n,i=1,j,b;
	printf("\nEnter Number of rows:");
	scanf("%d",&n);
	while(i<=n)
	{
		b=1;
		while(b<=n-i)
		{
			printf(" ");
			b++;
		}
		j=1;
		while(j<=i)
		{
			printf(i+j);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
