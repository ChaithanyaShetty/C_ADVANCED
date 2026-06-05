//2) write a sort function to receive a 2 dimensional character array as argument using bubblesort.


#include<stdio.h>
#include<string.h>
void SORT(int r,char a[r][100])
{
	int i;
	char (*p)[100];
	char temp[100];
	int count;
	
	for(i=0;i<r-1;i++)
	{	p=a;
		count=r-i-1;
		while(count>0)
		{
			if(strcmp(*(p),*(p+1))>0)
			{
				strcpy(temp,*p);
				strcpy(*(p),*(p+1));
				strcpy(*(p+1),temp);
			}
			p++;
			count--;
		}
	}
	p=a;
	printf("\nSorted names are:");
	for(i=0;i<r;i++)
	{
		printf("%s ",*p);
		p++;
	}

}
int main(int argc, char*argv[])
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
