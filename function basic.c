#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter an alphaber:");
	scanf("%c",&ch);
	if(isaplha(ch))
	printf("\nThe character s alphabet:");
	else
	printf("\nThe charatcer is not an alphabet");
	if(isdigit(ch))
	printf("\nThe character is digit");
	else
	printf("\nNotdigit");
	if(isalnum(ch))
	printf("\nEither alphabet or number");
	else
	printf("\nNeither alphabet nor number");
	if(isspace(ch))
	printf("\nThe character is space");
	else
	printf("\nThe character is not space");
	if(islower(ch))
	printf("\nCharacter is lower case alphabet");
	else
	printf("\nNot lower case");
	if(isuppper(ch))
	printf("\nCharacter is in uppercase");
	else
	printf("\nNot uppercase");
	printf("\nCharacter is in lowercase=%c",tolower(ch));
	printf("\nCharacter is in uppercase=%c",toupper(ch));
	return 0;
}
