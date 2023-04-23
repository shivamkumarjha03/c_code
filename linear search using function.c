#include<stdio.h>
void sort(int[],int,int);
int main()
{
	int a[100],size,i,num;
	printf("\nEnter Size of array:");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter Number:");
		scanf("%d",&a[i]);
	}
	printf("\nEnter number to search:");
	scanf("%d",&num);
	sort(a,size,num);
	
	return 0;
}
void sort(int a[],int size,int num)
{
	int i,flag=0,pos;
	for(i=0;i<size;i++)
	{
		if(a[i]==num)
		{
			flag=1,pos=i+1;
			break;
		}
	}
	if(flag==1)
	printf("\nNumber found at %d position",pos);
	else
	printf("\nNumber not found");
}
