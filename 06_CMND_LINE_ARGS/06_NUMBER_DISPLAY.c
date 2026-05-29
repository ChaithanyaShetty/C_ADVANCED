//read an integer number, display the number as a number name expansion.
//eg., 458 : four five eight

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	char *number[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	int i;
	int c=argc-1;
	int a[c];
	for(i=1;i<argc;i++)
	{
		a[i-1]=atoi(argv[i]);

	}
	for(i=0;i<c;i++)
	{
		printf("%s ",number[a[i]]);
	}

}



