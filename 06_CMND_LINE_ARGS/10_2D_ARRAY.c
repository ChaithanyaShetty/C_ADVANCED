
/*a set of words seperated by commas is given as comandline argument, as a single string.
  Divide the words at comma, and store them as individual strings in a two dimentional array
  and display the array.
i/p:./a.out "hello,world,my,name,is,chaithu"
o/p:Names are : hello world my name is chaithu */
#include<stdio.h>
void DOUBLE(char a[])
{
	int i,j,r=0,k=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==',')
		{
			r++;
		}

	}
	r+=1;
	char names[r][20];
	for(i=0;i<r;i++)
	{
		for(j=0;a[k]!=',' && a[k]!='\0';j++)
		{
			names[i][j]=a[k];
			k++;

		}

		if(a[k]==',' && a[k]!='\0')
		{
			k++;
			names[i][j]='\0';
		}
		if(a[k]=='\0')
		{
			names[i][j]='\0';
		}
	}

	printf("\nNames are :");
	for(i=0;i<r;i++)
	{
		printf("%s\n",names[i]);
	}
}
int main(int argc, char *argv[])
{

	char a[100];
	int i,j;
	for(i=1;i<argc;i++)
	{
		for(j=0;argv[i][j]!='\0';j++)
		{
			a[j]=argv[i][j];
		}
	}
	a[j]='\0';
	printf("\nnames are %s",a);
	DOUBLE(a);



}
