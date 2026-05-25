//1) string constant as destination and string variable as source

#include<stdio.h>
void copy(char *des, char *src)
{
	int i=0;
	while(src[i]!='\0')
	{
		des[i]=src[i];
		i++;

	}
	printf("\nDestination is %s",des);

}
int main()
{
	char *des="naga";
	char src[]="chaithanya";
	copy(des,src);
}
