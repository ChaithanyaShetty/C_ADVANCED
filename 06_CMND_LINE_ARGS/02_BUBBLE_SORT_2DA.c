//2) write a sort function to receive a 2 dimensional character array as argument using bubblesort.


#include<stdio.h>
#include<string.h>
void SORT(int r,char a[r][100])
{
	int i,j;
	char temp[100];
	for(i=0;i<r;i++)
	{
		for(j=0;j<(r-1-i);j++)
		{
			if(strcmp(a[j],a[j+1])>0)
			{
				strcpy(temp,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],temp);
			}
		}
	}
	printf("\nAfter sort names are: ");
	for(i=0;i<r;i++)
	{

		printf("%s ",a[i]);
	}
}
int main(int argc, char *argv[])
{
	int i,j;
	int r=argc-1;
	char names[r][100];
	for(i=1;i<argc;i++)
	{
		for(j=0;argv[i][j]!='\0';j++)
		{
			names[i-1][j]=argv[i][j];
		}
		names[i-1][j]='\0';
	}

	printf("\nNames are :");
	for(i=0;i<r;i++)
	{

		printf("%s ",names[i]);
	}

	SORT(r,names);


}




