//strrev using pointers

#include<stdio.h>
#include<string.h>
void reverse(char *p1,char *p2,int l)
{


	char *start=p2;
	p2=(p2+(l-1));
	while(*p1!='\0')
	{
		*p2=*p1;
		p2--;
		p1++;

	}
	start[l]='\0';

}
int main()
{
	char s1[]="naga chaithanya";
	int length=strlen(s1);
	printf("\nString length is %d",length);
	char s2[length+1];
	reverse(s1,s2,length);
	printf("\nReverse string is %s",s2);

}
