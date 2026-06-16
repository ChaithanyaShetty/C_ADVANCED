/*5)  "Write a trim() function,that will remove the leading and trailing spaces from 
  a string and resize it to the required space.
  eg., Input : ""    str  str   ""
Output : ""str str"""*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *s=(char*)malloc(20*sizeof(char));
	if(s!=NULL)
	{
		printf("\nEnter the string :\n");
		scanf("%[^\n]",s);
		printf("\nString is %s",s);
		int l=strlen(s);
		printf("\nString length is %d",l);
		int start=0,end=l-1,i=0;
		while(s[i]==' ')
		{
			start++;
			i++;
			if(s[i]!=' ')
				break;
		}
		printf("\nstart=%d",start);
		while(s[end]==' ')
		{
			end--;
			if(s[end]!=' ')
				break;
		}

		printf("\nStart=%d and end=%d",start,end);
		int size=end-start+2;

		i=0;
		while(start<=end)
		{
			s[i]=s[start];
			i++;
			start++;
		}
		s[i]='\0';
		s=realloc(s,size);
		printf("\nstring length is %d",strlen(s));
		printf("\nAfter Removing leading and Trailing spaces string is %s",s);


	}
}
