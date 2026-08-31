/*Repeat command line argument string sorting program using swapping function using
  call by reference of pointers.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void PRINT_DATA(char *p[],int size);
int main(int argc, char* argv[])
{
	int i;

	printf("\nCoubt is %d",argc);
	int size=argc-1;
	char *names[size];
	for(i=1;i<=size;i++)
	{
		names[i-1] = argv[i];
	}

	PRINT_DATA(names,size);
}

void PRINT_DATA(char *p[],int size)
{
	char *temp;
	int i,j;
	printf("\nNames are");
	for(i=0;i<size;i++)
	{
		printf("%s ",p[i]);
	}

	char **P=p;
	for(i=0;i<size-1;i++)
	{
		char **first=P;
		for(j=0;j<(size-i-1);j++)
		{
			if(strcmp(*first,*(first+1))>0)
			{

				//strcpy(temp,*first);
				//strcpy(*first,*(first+1));
				//strcpy(*(first+1),temp);
				temp = *first;
				*first = *(first + 1);
				*(first + 1) = temp;
			}
			first++;
		}
	}
	printf("\nAFTER SORTNames are");
	for(i=0;i<size;i++)
	{
		printf("%s ",p[i]);
	}


}


/*strcpy() copies the string data (characters) from one memory location to another, while the pointer addresses remain unchanged. Pointer swapping (temp = a; a = b; b = temp;) does not copy any characters; it only exchanges the addresses stored in the pointers. The strings stay in the same memory locations, but the pointers now point to different strings. This makes pointer swapping faster and ideal for sorting an array of string pointers like argv[].*/

