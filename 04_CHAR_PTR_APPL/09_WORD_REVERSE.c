//9) implement a function to receive a sentence as input, and return the string with the words reversed,

#include<stdio.h>
#include<string.h>
void WORD_REVERSE(char p[])
{
	printf("\n String is %s",p);

	int i=0,j,k,r,count=0;
	char temp;
	while(p[i]!='\0')
	{
		for(j=i;p[j]!=' '&&p[j]!='\0';j++)
		{
			count++;
		}
		for(k=i,r=j-1;k<r;k++,r--)
		{
			temp=p[k];
			p[k]=p[r];
			p[r]=temp;
		}
		if(p[j]==' ')
		{

			p[j]=' ';
			j++;

		}
		i=j;

	}
	printf("\nWord Reversed string is %s",p);

}
void STRING_REVERSE(char a[])
{
	int l=strlen(a);
	char temp;
	printf("\nString length is %d",l);
	int i,j;
	for(i=0,j=l-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}

	printf("\nReverse string is %s",a);
	WORD_REVERSE(a);
}
int main()
{
	char a[]="Lagisetty venkata naga chaithanya";
	printf("\nString is %s",a);
	STRING_REVERSE(a);
}
