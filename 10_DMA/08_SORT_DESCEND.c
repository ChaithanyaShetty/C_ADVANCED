/*8) Read a set of strings in a loop , create every string dynamically based on the given 
  string's length (first read the string into an array, calculate its length and using that
  allocated memory dynamically, and copy the string from array to dyanmic memory). 
  Sort the strings in descending order and print.*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void SORT(char *p[],int size)
{
	char **original=p;
	char *temp;
	int i=0,j;
	while(i<size-1)
	{   

		for(j=0;j<size-i-1;j++)
		{

			printf("\np=%s and p+1=%s",*p,*(p+1));
			if(strcmp(*p,*(p+1))<0)
			{
				temp=*p;
				*p=*(p+1);
				*(p+1)=temp;

			}
			p++;

		}
		p=original;
		i++;
	}
	printf("\nReverse Sort order Names are:\n");
	for(i=0;i<size;i++)
	{
		printf("%s ",p[i]);
	}

}
int main()
{
	int size;
	printf("\nenter how many strings u want to sort");
	scanf("%d",&size);
	char a[size][20];
	int i;
	printf("\nEnter names:\n");
	for(i=0;i<size;i++)
	{
		scanf("%s",a[i]);
	}
	char *p[size];
	for(i=0;i<size;i++)
	{
		int length=strlen(a[i]);
		p[i]=(char *)malloc((length+1)*sizeof(char));
		if(p[i]!=NULL)
		{
			strcpy(p[i],a[i]);
		}
		else
		{
			printf("\nMemory allocation failed");
		}
	}
	printf("\nNames are:\n");
	for(i=0;i<size;i++)
	{
		printf("%s ",p[i]);
	}

	SORT(p,size);
	for(i=0;i<size;i++)
	{
		free(p[i]);
	}

}

