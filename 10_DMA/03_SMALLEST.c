/*3) Write a program to read  n number of strings from a user and print which string 
  is the smallest of all ( in string comparison, smallest string means that should come 
  the first in dictionary sorting order). Create the strings dynamically and read the data.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void SMALLEST(char *p[],int size)
{   
	int i=0;
	char **first=p;
	char *small=*first;
	printf("\nfirst=%s and small=%s",*first,small);
	while(i<size)
	{
		if(strcmp(*first,small)<0)
		{
			small=*first;
		}
		first++;
		i++;
	}
	printf("\nSmallest string is %s",small);

}
int main()
{
	int size;
	printf("\nenter size of array:");
	scanf("%d",&size);
	char *p[size];
	int i;
	printf("\nenter names:");
	for(i=0;i<size;i++)
	{
		p[i]=(char*)malloc(20*sizeof(char));
		if(p[i]!=NULL)
		{
			scanf("%s",p[i]);
		}
		else
		{
			printf("\nMemory allocation failed:");
			exit(1);
		}
	}
	printf("\nNames are:");
	for(i=0;i<size;i++)
	{
		printf("%s ",p[i]);
	}
	SMALLEST(p,size);
}

