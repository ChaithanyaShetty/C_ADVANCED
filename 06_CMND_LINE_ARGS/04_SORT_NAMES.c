//4) sort list of names received on command line argument using a separate sort function.


#include<stdio.h>
#include<string.h>
void SORT(int r,int c,char a[r][c])
{
	int i,j;
	char temp[c];
	for(i=0;i<(r-1);i++)
	{
		for(j=i+1;j<r;j++)
		{

			if(strcmp(a[i],a[j])>0)
			{
				strcpy(temp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],temp);
			}
		}

	}
	printf("\nSorted names are:");
	for(i=0;i<r;i++)
	{
		printf("%s ",a[i]);
	}
}
int main(int argc, char *argv[])
{
	int i,j,k=100;
	int c=argc-1;
	char names[c][k];
	for(i=1;i<argc;i++)
	{

		for(j=0;argv[i][j]!='\0';j++)
		{
			names[i-1][j]=argv[i][j];
		}
		names[i-1][j]='\0';

	}
	printf("\nNames are :");
	for(i=0;i<c;i++)
	{
		printf("%s ",names[i]);

	}

	SORT(c,k,names);
}
