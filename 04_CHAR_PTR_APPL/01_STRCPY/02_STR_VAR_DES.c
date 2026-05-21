//2) string variable as destination and string constant as source

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
	char *src="hello";
	char des[]="world";
	copy(des,src);
}
