/*5) implement your own string reverse function using the above swap function to swap the edges while reversing.

  try calling the string reverse function using
  1) string variable
  2) string constant

  note down the output and analyze the reasons.*/

#include<stdio.h>
#include<string.h>
void SWAP(char *a, char *b)
{
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;

}
void REVERSE(char str[])
{
	printf("\nstring is %s",str);

	int l=strlen(str);
	int i,j;
	printf("\nString length is %d\n",l);
	for(i=0,j=l-1;i<j;i++,j--)
	{
		SWAP(&str[i],&str[j]);
	}
	printf("\nReverse of str is %s",str);



}
int main()
{
	char str[]="hello";
	char *b="world";
	printf("\nString reverse using string variable\n");
	REVERSE(str);
	printf("\nString reverse using string Constant\n");
	REVERSE(b);

}



/*
String constants are stored in read-only memory (ROM/read-only section).
While reversing, the program tries to modify characters of the string constant using swap().
Modifying read-only memory is not allowed, so it may cause a segmentation fault/runtime error.*/
