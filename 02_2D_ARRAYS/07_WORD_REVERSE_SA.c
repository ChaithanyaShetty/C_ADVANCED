#include<stdio.h>
#include<string.h>
void REVERSE(char a[], int l)
{
	int i=0,j,k,r;
	char temp;
	while(a[i]!='\0')
	{
		for(j=i;a[j]!='\0' && a[j]!=' ';)
		{
			j++;
		}

		for(k=i,r=j-1;k<r;k++,r--)
		{
			temp=a[k];
			a[k]=a[r];
			a[r]=temp;

		}
		if(a[j]==' ')
			j++;

		i=j;
	}
	printf("\nWord Reversed string is %s",a);
}
int main()
{
	char a[]="Lagisetty venkata naga chaithanya";
	int l=strlen(a);
	printf("Length is %d\n",l);
	int i,j;
	char temp;
	printf("\nString is %s\n",a);
	for(i=0,j=l-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;

	}
	a[l]='\0';
	printf("\nReversed string is %s",a);

	REVERSE(a,l);
}
