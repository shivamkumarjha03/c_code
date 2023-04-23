#include<stdio.h>
void arrayadd(int[],int); //function prototype
int main()
{
	int a[1000],size,i;
	printf("\nEnter Size of array:");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\Enter Number:");
		scanf("%d",&a[i]);}
	    arrayadd(a,size); //function call
	return 0;
	}
	void arrayadd(int a[],int size)
	{
		int sum,i;
		for(i=0;i<size;i++)
		sum=sum+a[i];
	
	printf("\nSum of array elements=%d",sum);
}
