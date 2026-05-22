#include<stdio.h>
#include<string.h>
void WORD_REVERSE(char *p)
{
	char *start,*end,*original;
	start=p;
	original=p;
	char temp;
	while(*p!='\0')
	{
		if(*p==' ')
		{
			end=p-1;
			while(start<end)
			{
				temp=*start;
				*start=*end;
				*end=temp;
				start++;
				end--;

			}
			start=p+1;
		}
		p++;
	}
	end=p-1;
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;

	}
	printf("\nWORD Reverse string is %s",original);     
}
void STRING_REVERSE(char *p)
{
	printf("\nString is %s",p);
	int l=strlen(p);
	printf("\nstring length is %d",l);
	char *start,*end;
	start=p;
	end= l+p-1;
	char temp;
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;

	}
	printf("\nReverse string is %s",p);
	WORD_REVERSE(p);
}
int main()
{
	char str[]="Lagisetty venkata naga chaithanya";
	STRING_REVERSE(str);
}
