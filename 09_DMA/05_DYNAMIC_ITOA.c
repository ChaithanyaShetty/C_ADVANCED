//5) Implement itoa function and return the string from the function. Print the result in main. itoa function takes an integer as input, and stores the integer in a string.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *ITOA(int *p,char *s,int size)
{
	//printf("\nP is %d",*p);
	char *string=s;

	if(*p==0)
	{
		*string='0';
		*(string+1)='\0';
		return s;
	}

	int c=*p;
	//printf("\nc is %d",c);
	int d;
	char temp;

	while(c>0)
	{
		d=c%10;
		*string=d+'0';
		c=c/10;
		string++;
	}
	*string='\0';
	printf("\nReverse atoi is %s",s);
	char *start=s;
	char *end=s+size-1;

	printf("\nStart =%c and end=%c",*start,*end);
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	}
	printf("\nAtoi is %s",s);
	return s;
}
int main()
{
	int *p;
	p=(int *)malloc(sizeof(int));
	if(p!=NULL)
	{
		printf("\nEnter the number");
		scanf("%d",p);
		printf("\nP is %d",*p);
	}
	else
	{
		printf("\nmemory allocation failed");
		exit(1);
	}
	int length=*p;
	int l=0;

	if(length==0)
	{
		l=1;
	}
	else
	{
		while(length>0)
		{
			length=length/10;
			l++;
		}
	}
	printf("\nLength of int is %d",l);
	char s[l+1];

	char *s1=ITOA(p,s,l);
	printf("\nATOI is %s",s1);
}

