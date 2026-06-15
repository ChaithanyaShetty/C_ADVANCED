/*6) Write a string concatenation function that calculates the source string length,
  accordingly adjusts the size of destination string before concatenating the strings, 
  to avoid size issues. For this the destination must be allocated dynamically in calling function.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void CONCAT(char *des,char *src)
{
	int l1=strlen(des);
	printf("\nDES string length is %d",l1);
	int l2=strlen(src);
	printf("\nDestination string length is %d",l2);
	int l3=l1+l2+1;
	printf("\nConcatenated string length is %d",l3);
	des=realloc(des,(l3*sizeof(char)));
	char *DES=des;
	des=des+l1;
	while(l2>0)
	{
		*des=*src;
		printf("\ndes=%c and src=%c",*des,*src);
		des++;
		src++;
		l2--;

	}
	*des='\0';
	printf("\nConcatenated destination string is %s",DES);
}
int main()
{
	char *des=(char*)malloc(20*sizeof(char));
	if(des!=NULL)
	{
		printf("\nenter destination string");
		scanf("%s",des);
		printf("\nDestination string is %s",des);
	}
	else
	{
		printf("\nMemory allocation failed");
		exit(1);
	}
	char *src=(char *)malloc(20*sizeof(char));
	if(src!=NULL)
	{
		printf("\nenter the source string");
		scanf("%s",src);
		printf("\nSrc string is %s",src);
	}
	else
	{
		printf("\nMemory allocation failed");
		exit(1);
	}

	CONCAT(des,src);
	free(des);

}
