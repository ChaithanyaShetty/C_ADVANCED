//strcmp using pointers

#include<stdio.h>
int compare(char *p1,char *p2)
{
	while(*p1!='\0' && *p2!='\0')
	{
		if(*p1!=*p2)
			return(*p1-*p2);
		else
		{
			p1++;
			p2++;
		}
	}
	return (*p1 - *p2);
}
int main()
{
	char s1[]="naga";
	char s2[]="naga";
	int r=compare(s1,s2); 
	if(r==0)
		printf("\nBoth strings are same");
	else if(r>0)
		printf("\nString1 is bigger");
	else
		printf("\nString2 is bigger");
}
