//3) string variable as destination and string variable as source

#include<stdio.h>
void concat(char s1[],char s2[])
{
	int i=0;
	while(s1[i]!='\0')
	{
		i++;

	}
	printf("\nS1 length is %d\n",i);
	int j=0;
	while(s2[j]!='\0')
	{
		s1[i+j]=s2[j];
		j++;
	}
	s1[i+j]='\0';
	printf("concat string is %s",s1);
}
int main()
{
	char s1[100]="naga";
	char s2[100]="chaithanya";
	concat(s1,s2);
}
