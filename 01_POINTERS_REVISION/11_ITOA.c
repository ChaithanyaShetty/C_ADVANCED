//itoa

#include<stdio.h>
#include<string.h>
void I_TO_A(int a)
{
	char s[10];
	int c;char d=0;int i=0;
	if(a==0)
	{
		s[i]='0';
		printf("\nItoa is %c",s[i]);
		i++;

	}
	while(a>0)
	{
		c=a%10;

		d= c +'0';
		s[i]=d;

		a=a/10;
		i++;


	}
	s[i]='\0';
	printf("\nReversed itoa is %s",s);
	char s2[10];
	int l=strlen(s);
	printf("\nString length is %d",l);
	int j;
	for(j=0;s[j]!='\0';j++)
	{
		s2[l-j-1]=s[j];
	}
	s2[l]='\0';
	printf("\nitoa is %s",s2);
}
int main()
{
	int a=12034;
	if(a>=0)
		I_TO_A(a);
}
