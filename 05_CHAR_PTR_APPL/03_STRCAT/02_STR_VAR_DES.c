//2) string variable as destination and string constant as source

#include<stdio.h>
void concat(char s2[],char *s1)
{
	int i=0;
	while(s2[i]!='\0')
	{
		i++;

	}
	printf("\nS2 length is %d\n",i);
	int j=0;
	while(s1[j]!='\0')
	{
		s2[i+j]=s1[j];
		j++;
	}
	s2[i+j]='\0';
	printf("concat string is %s",s2);
}
int main()
{
	char *s1="naga";
	char s2[100]="chaithanya";
	concat(s2,s1);
}
