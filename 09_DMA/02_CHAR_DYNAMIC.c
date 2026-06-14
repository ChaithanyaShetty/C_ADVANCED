//2) create a string dynamically, read and print its value.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	char *ptr;
	printf("\nEnter the value of n how many bytres of string u want:");
	scanf("%d",&n);
	ptr=(char*)malloc((n+1)*(sizeof(char)));

	if(ptr == NULL)
	{
		printf("Memory allocation failed");
		return 1;
	}
	else
	{
		printf("\nEnter the string:\n");

		getchar();   
		fgets(ptr,(n+1),stdin);
		printf("\nString is %s",ptr);
		free(ptr);
	}
}
