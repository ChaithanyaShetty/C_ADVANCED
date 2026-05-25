//4) Write a swap function to swap the values of two character variables.

#include<stdio.h>
void SWAP(char *a, char *b)
{
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;

}
int main()
{
	char a='a';
	char b='b';
	SWAP(&a,&b);
	printf("\nAfter swap a=%c b=%c",a,b);
}
