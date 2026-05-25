//2) Implement your own string compare function and try calling the function using two string constants as input arguments.

#include<stdio.h>
#include<stdlib.h>
void compare(char *s1,char *s2)
{
	printf("\n strings are %s %s\n",s1,s2);
	int i=0;
	while(s1[i]!='\0' && s2[i]!='\0')
	{
		if(s1[i]!=s2[i])
		{
			printf("Both are not same");
			exit(1);
		}
		i++;
	}
	if(s1[i]=='\0' && s2[i]=='\0')
		printf("\nStrings are equal");
	else
		printf("\nStrings are not equal");

}
int main()
{
	char *s1="chaithanya";
	char *s2="chaithanyaa";
	compare(s1,s2);
}
