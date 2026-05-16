/*Declare a two dimensional array of characters, 
  read names from the user and print them back with each individual character format (%c) in a loop.*/

#include<stdio.h>
void NAMES(int r, int c, char names[r][c])
{
	int i,j;
	printf("\nPrinting names using c:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;names[i][j]!='\0';j++)
		{
			printf("%c",names[i][j]);
		}


		printf("\n");
	}
}
int main()
{
	int r,c;
	printf("\nEnter rows and colomuns: ");
	scanf("%d%d",&r,&c);
	char names[r][c];
	int i;
	for(i=0;i<r;i++)
	{
		scanf("%s",names[i]);
	}
	printf("\nNames are :");
	for(i=0;i<r;i++)
	{
		printf("%s ",names[i]);
	}

	NAMES(r,c,names);

}
