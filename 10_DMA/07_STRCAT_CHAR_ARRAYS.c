/*7) read a set of words from the user and concatenate all of them to make a sentence and 
  print it back using the concatenation function above with spaces as delimiters and fullstop
  as end of the sentence.

input: 
Kernel
Masters
is
India's
leading
training
institute.

output: Kernel Masters is India's leading training institute.*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void CONCAT(char *p[],int size)
{
	int length=0;
	int i,j;
	for(i=0;i<size;i++)
	{
		length+=strlen(p[i]);
	}
	printf("\nLength is %d",length);
	length=length+size+1;
	char *s=(char *)malloc(length*sizeof(char));
	char *original=s;
	char **first=p;
	char *temp;
	i=0;
	if(s!=NULL)
	{   temp=*first;
		while(i<size)
		{
			for(j=0;*temp!='\0';j++)
			{
				*s=*temp;
				s++;
				temp++;
			}
			if(*temp=='\0' && i!=(size-1))
			{
				*s=' ';
				s++;
			}
			if(*temp=='\0' && i==(size-1) && *(temp-1)!='.' )
			{
				*s='.';
				s++;
			}
			if(i<size-1)
			{
				first++;
				temp=*first;
			}
			i++;
		}
		*s='\0';

	}
	printf("\nAfter concatenated string is %s",original);
	free(original);
}
int main()
{
	int size;
	printf("\nEnter number of strings u want");
	scanf("%d",&size);
	char *p[size];
	int i;
	printf("\nEnter names:\n");
	for(i=0;i<size;i++)
	{
		p[i]=(char *)malloc(20*sizeof(char));
		if(p[i]!=NULL)
		{
			scanf("%s",p[i]);
		}
		else
		{
			printf("\nMemory allocation failed");
			exit(1);
		}
	}
	printf("\nNames are :\n");
	for(i=0;i<size;i++)
	{
		printf("%s ",p[i]);
	}
	CONCAT(p,size);
	for(i=0;i<size;i++)
	{
		free(p[i]);
	}
}
