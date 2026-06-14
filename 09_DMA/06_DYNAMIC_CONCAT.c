/*6) Write a function, that takes two strings as input and concatenates only the 
  first n characters from first string and first m characters from second string and 
  makes a new string.
  eg., input str1 = "kernel masters", str2 = "raayan systems", n = 3, m = 5
output : kerraaya*/


#include<stdio.h>
#include<stdlib.h>
void CONCAT(char *s1,char *s2)
{
	int n,m;
	printf("\nEnter value of n");
	scanf("%d",&n);
	printf("\nEnter value of m");
	scanf("%d",&m);
	int size=n+m+1;
	char *s3=(char *)malloc(size*sizeof(char));
	char *original=s3;
	if(s3!=NULL)
	{
		int i;
		for(i=0;i<n;i++)
		{
			*s3=*s1;
			s3++;s1++;
		}

		for(i=0;i<m;i++)
		{
			*s3=*s2;
			s3++;s2++;
		}
		*s3='\0';
	}

	printf("\nConcatenated string is %s",original);
	free(original);

}
int main()
{

	char *s1=(char *)(malloc(20*sizeof(char)));
	char *s2=(char *)(malloc(20*sizeof(char)));
	if(s1!=NULL)
	{
		printf("\nenter string1:\n");
		fgets(s1,20,stdin);
		printf("\nString1 is %s",s1);
	}

	if(s2!=NULL)
	{
		printf("\nenter string2:\n");
		fgets(s2,20,stdin);
		printf("\nString2 is %s",s2);
	}
	CONCAT(s1,s2);
	free(s1);
	free(s2);

}

