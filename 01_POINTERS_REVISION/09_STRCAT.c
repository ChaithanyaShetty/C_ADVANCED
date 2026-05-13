//strcat using pointers
#include<stdio.h>
#include<string.h>
void CONCAT(char *p1,char *p2)
{
	char *start=p1;
	int i=0;
	while(*p1!='\0')
	{
		p1++;
		i++;
	}

	printf("\nlength of the string is %d",i);

	while(*p2!='\0')
	{
		*p1=*p2;
		p1++;
		p2++;
	}
	*p1='\0';
	printf("\nConcatenated string is %s",start);
}
int main()
{
	char s1[100]="naga";
	char s2[100]="chaithanya";
	int l=strlen(s1);
	printf("\nstring1 length is %d",l);
	CONCAT(s1,s2);
	printf("\nConcatenated string is %s",s1);
}
