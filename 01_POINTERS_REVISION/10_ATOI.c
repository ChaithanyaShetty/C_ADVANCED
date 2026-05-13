//Atoi

#include<stdio.h>
#include<string.h>
int ASCII(char a[])
{
	int i;
	int digit=0;
	int c=0;
	for(i=0;a[i]!='\0';i++)
	{
		digit=a[i]-'0';
		c=digit+(c*10);

	}
	return c;



}

int main()
{
	char a[]="1234";
	int i=0,r=0,is_valid=1;

	int length=strlen(a);

	for(i=0;i<length;i++)
	{
		if(a[i]<'0'&&a[i]>'9')
		{
			is_valid=0;
		}
	}

	if(is_valid)
		r= ASCII(a);
	printf("After ASCII to integer is %d",r);


}
