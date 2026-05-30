//WAP to print if  a character is alphanumeric or special character, using macro conditions
#include<stdio.h>
#define cha(a)  if((a>='0' && a<='9') || (a>='a' && a<='z') || (a>='A' && a<='Z'))\
		       printf("\nAlpha numeric");\
		       else \
		       printf("\nSpecial character");
int main()                
{
	char c;
	printf("Enter any character: ");
	scanf(" %c",&c);
	cha(c);
}
