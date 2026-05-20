/*5) Read a set of names in small letters. 
  Convert the alternate characters of every string into capital case and display. */

#include<stdio.h>
#include<stdlib.h>
void DELIMIT(int r, int c,char a[r][c])
{
	printf("\nHI");
	int l;
	l=(r*c+10);
	printf("\nl is %d\n",l);
	char b[l];
	int i,j,k=0;

	for(i=0;i<r;i++)
	{
		for(j=0;a[i][j]!='\0';j++)
		{
			b[k]=a[i][j];
			k++;
		}
		// printf("k value is %d",k);

		b[k]=' ';
		k++;

	}
	b[k]='\0';
	printf("\nUsing space as delimiter\n");
	for(k=0;b[k]!='\0';k++)
	{
		printf("%c",b[k]);
	}
}
int main()
{
	int r,c;
	printf("enter rows and coloumns:\n");
	scanf("%d%d",&r,&c);
	char names[r][c];
	int i;
	for(i=0;i<r;i++)
	{
		scanf("%s",names[i]);
	}
	printf("\nNames are: ");
	for(i=0;i<r;i++)
	{
		printf("%s ",names[i]);
	}
	DELIMIT(r,c,names);
}
