//ITOA using pointer

#include<stdio.h>
#include<string.h>

void ITOA(int *p1)
{

	printf("\nValue of *p1 is %d",*p1);
	int i=0,c=0,d=0;
	//      char *p2=p1;
	char s1[10];

	if(*p1==0)
	{
		s1[i]='0';
		i++;
	}
	while(*p1!='\0')
	{
		c=(*p1%10);
		d='0'+c;
		s1[i]=d;
		*p1=*p1/10;
		i++;
	}
	s1[i]='\0';
	printf("\nREVERSED ITOA POINTER IS :%s",s1);
	char s2[10];
	int l=strlen(s1);
	int j;
	for(j=0;s1[j]!='\0';j++)
	{
		s2[l-j-1]=s1[j];
	}
	s2[l]='\0';
	printf("\nITOA USING POINTERS ARE : %s",s2);
}
int main()
{

	int a=1234;
	if(a>=0)
	{

		ITOA(&a);
	}
}

