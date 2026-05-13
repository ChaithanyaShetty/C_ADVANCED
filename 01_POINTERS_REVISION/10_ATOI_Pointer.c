//atoi using pointers

#include<stdio.h>
#include<string.h>
int a_to_i(char *p)
{
	int integer=0,digit=0;
	while(*p!='\0')
	{
		digit= *p -'0';
		integer=digit+(integer*10);
		p++;
	}
	return integer;

}

int main()
{

	char a[]="1234";
	int length=strlen(a);
	printf("\nlength of string is %d",length);
	int i,is_valid=1,r=0;
	for(i=0;i<length;i++)
	{
		if(a[i]<'0'|| a[i]>'9')
		{
			is_valid=0;
			break;
		}
	}

	if(is_valid)
	{
		r=a_to_i(a);
	}
	printf("\nAfter ASCII to integer is %d",r);

}
