//3) create a string dynamically, copy a string constant to it ( "Kernel"). 
//Create another string dynamically. Copy the first string to second string.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *s="kernel";
	int l=strlen(s);
	printf("\nString length is %d",l);
	char *str1,*str2;
	str1=(char*)malloc((l+1)*(sizeof(char)));
	str2=(char*)malloc((l+1)*(sizeof(char)));
	if(str1!=NULL)
	{
		strcpy(str1,s);
		printf("\nStr1 is %s",str1);
	}
	else
	{
		printf("Memory allocation failed");
		return 1;
	}
	if(str2!=NULL)
	{
		strcpy(str2,str1);
		printf("\nStr2 is %s",str2);
	}
	else
	{
		printf("Memory allocation failed");
		return 1;
	}
	free(str1);
	free(str2);

}

