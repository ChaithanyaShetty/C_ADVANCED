#include<stdio.h>
#include<string.h>
void REVERSE(int r, int c, char names[r][c])
{
	int i;
	printf("\nReversed names are:");
	for(i=r-1;i>=0;i--)
	{
		printf("%s ",names[i]);
	}
}

void REVERSED_2(int r,int c, char names[r][c])
{
	int i,j,k;
	char temp[c];
	for(i=0,k=r-1;i<k;i++,k--)
	{
		for(j=0;j<c;j++)
		{
			temp[j]=names[i][j];
			names[i][j]=names[k][j];
			names[k][j]=temp[j];

		}
	}
	printf("\nReversed names are:");
	for(i=0;i<r;i++)
	{
		printf("%s ",names[i]);
	}
}
int main()
{
	int r,c;
	printf("Enter rows and coloums:\n");
	scanf("%d%d",&r,&c);
	char names[r][c];
	int i;
	printf("enter names:\n");
	for(i=0;i<r;i++)
	{
		scanf("%s",names[i]);
	}

	printf("Names are:\n");
	for(i=0;i<r;i++)
	{
		printf("%s ",names[i]);
	}

	REVERSE(r,c,names);
	printf("\nAnother  method:\n");
	REVERSED_2(r,c,names);




}
