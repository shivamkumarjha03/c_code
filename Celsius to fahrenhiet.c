#include<stdio.h>
int main()
{
	float c,f;
	printf("\nEnter Temperature in celsius:");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("\nTemperature in fahrenhiet=%f",f);
	return 0;
}
