/*8) read a set of names using scanf and find out how many names are duplicate. There could be multiple strings that are duplicate.  Output is given as a single count. In another version, try to print the duplicate strings.

input: hello world hello world hello hello world welcome to my world my dear

output 1: 3 strings are duplicate
output 2: 
following strings are duplicate
hello world my*/

#include<stdio.h>
#include<string.h>
int  main(int argc,char*argv[])
{
	int i=1,j;
	int r=argc-1;
	char a[r][20];

	for(i=1;i<argc;i++)
	{
		for(j=0;argv[i][j]!='\0';j++)
		{
			a[i-1][j]=argv[i][j];
		}
		if(argv[i][j]=='\0')
		{
			a[i-1][j]='\0';
		}


	}
	printf("\nNames are :");
	for(i=0;i<r;i++)
	{
		printf("%s ",a[i]);
	}

	int k,l,duplicate_already_counted ;
	int count=0;
	printf("\nDuplicate Strings are :\n");
	for(i=0;i<r;i++)
	{
		for(j=i+1;j<r;j++)
		{
			if(strcmp(a[i],a[j])==0)
			{
				duplicate_already_counted = 0;
				for(k=0,l=j;k<l;k++)
				{
					if(k != i && strcmp(a[i],a[k])==0)
					{
						duplicate_already_counted = 1;
						break;
					}

				}
				if(duplicate_already_counted == 0)
				{
					count++;
					printf("%s ",a[i]);
				}
			}
		}
	}
	printf("\nDuplicate strings are %d",count);

} 
