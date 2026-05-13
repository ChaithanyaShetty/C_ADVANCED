//strcpy using pointers
#include<stdio.h>
void copy(char *p1,char *p2)
{
	int i;
	char *temp=p2;
	for(i=0;*p1!='\0';i++)
	{
		*p2=*p1;
		p1++;
		p2++;
	}
	printf("\nCopied string is %s",temp);
}
int main()
{
	char s1[100]="naga chaithanya";
	char s2[100];
	copy(s1,s2);

}

/*

//strcpy using pointers
#include<stdio.h>
void copy(char *p1,char *p2)
{
	int i;

	for(i=0;*p1!='\0';i++)
	{
		*p2=*p1;
		p1++;
		p2++;
	}
	*p2='\0';

}
int main()
{
	char s1[100]="naga chaithanya";
	char s2[100];
	copy(s1,s2);
	printf("\nCopied string is %s",s2);
}

*/
