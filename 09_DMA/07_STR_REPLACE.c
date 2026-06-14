/*7)Write a function that takes a main string and two sub strings (need not be same length), and replace every occurrence of first substring with the second substring in main string and return a new string as output.

  eg., input : kernel  e   xxx

output: kxxxrnxxxl*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *main=(char *)malloc(20*sizeof(char));
	char *sub1=(char *)malloc(20*sizeof(char));
	char *sub2=(char *)malloc(20*sizeof(char));
	if(main!=NULL)
	{
		printf("\nenter main string");
		scanf("%s",main);
	}
	else
	{
		printf("\nMemory allocation failed\n");
		return 1;

	}
	if(sub1!=NULL)
	{
		printf("\nenter sub1 string");
		scanf("%s",sub1);
	}
	else
	{
		printf("\nMemory allocation failed\n");
		return 1;

	}
	if(sub2!=NULL)
	{
		printf("\nenter sub2 string");
		scanf("%s",sub2);
	}
	else
	{
		printf("\nMemory allocation failed\n");
		return 1;

	}

	char *result=(char *)malloc(30*sizeof(char));
	int i,k,p,q,r=0,count;
	int l=strlen(sub2);
	if(result!=NULL)
	{
		for(i=0; main[i]!='\0';)
		{
			count=0;
			/* CHANGED */
			for(p=i,q=0; sub1[q]!='\0'; p++,q++)
			{
				if(main[p]==sub1[q])
					count++;
				else
					break;

			}
			if(count==strlen(sub1))
			{
				for(k=0; k<l; k++)
				{
					result[r]=sub2[k];
					r++;
				}
				i=i+strlen(sub1);
			}

			else
			{
				result[r]=main[i];
				r++;
				i++;

			}
		}
		result[r]='\0';
		printf("\nResultant string is %s",result);


	}



	else
	{
		printf("\nMemory not allocated");
		return 1;
	}



}


