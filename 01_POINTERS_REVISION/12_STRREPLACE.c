#include<stdio.h>
void REPLACE(char *p, int n1,int n2)
{
	char *temp=p;
	while(*p!='\0')
	{
		if(*p==n1)
		{
			*p=n2;
		}
		p++;
	}

	 printf("\nReplaced string is %s",temp);
}
int main()
{
	char s1[100];
	char n1;char n2;
	printf("\nenter the string:");
	scanf("%s",s1);
	printf("\nEnter the char to replace in the string:");
	scanf(" %c",&n1);
	printf("\nenter the character to update in the string:");
	scanf(" %c",&n2);
	REPLACE(s1,n1,n2);
	printf("\nReplaced string is %s",s1);

}
