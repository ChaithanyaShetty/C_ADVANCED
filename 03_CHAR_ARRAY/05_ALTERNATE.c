/*5) Read a set of names in small letters. 
  Convert the alternate characters of every string into capital case and display. */

#include<stdio.h>
#include<stdlib.h>
void SMALL(int r, int c, char a[r][c])
{
	int i,j;
	printf("\nStrings are :");
	for(i=0;i<r;i++)
	{
		for(j=0;a[i][j]!='\0';j++)
		{
			if(a[i][j]>='a' && a[i][j]<='z')
			{
				if(j%2!=0)
				{
					a[i][j] = a[i][j] - 32;        

				}

			}
			else
			{
				printf("\nNot vaid\n");
				exit(1);
			}
		}
		printf("%s ",a[i]);
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
	SMALL(r,c,names);
}
