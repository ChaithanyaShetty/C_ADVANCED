/*2) Implement your own realloc function using malloc and free using below steps: 
  - Allocate memory for new size using malloc
  - copy data from old address to new address
  - release the old address
  - return the new address*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void *REALLOC(char *s, int new_size)
{

	char *p=s;
	s=(char *)malloc(new_size*sizeof(char));
	if(s!=NULL)
	{
		strcpy(s,p);
		printf("\nRealloc String is %s",s);
		free(p);
		return s;
	}
	else
	{
		printf("\nMemory Allocation failed");
		exit(1);
	}

}
int main()
{
	char *s=(char*)malloc(10*sizeof(int));
	if(s!=NULL)
	{
		printf("\nEnter string");
		scanf("%s",s);
		printf("\nString is %s",s);
		printf("\nstring address is %p",s);
		int l=strlen(s);
		int new_size;
		printf("\nEnter new size:");
		scanf("%d",&new_size);
		char *p=NULL;
		if(new_size>l)
			p=REALLOC(s,new_size);
		printf("\nReturn address is %p",p);
	}
	else
	{
		printf("\nMemory Allocation Failed\n");
		exit(1);
	}
}
