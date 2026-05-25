//7) try to send a character array / character pointer / string constant as arguments and see what is the size returned, and understand the difference./

#include<stdio.h>
#define SIZEOF(x)  ((char *)(&x+1)- (char *)&x)
//#define SIZEOF(x)  ((&x+1)-&x)

int main()
{
	char s[]="chaithanya";
	char *c="ram";
	char *d=s;
	printf("\nSize of char array is %zu",SIZEOF(s));
	printf("\nSize of char pointer is %zu",SIZEOF(d));
	printf("\nSize of string constant is %zu",SIZEOF(c));

}

/*In a character array like char s[] = "chaithanya", memory is allocated for all characters including the null character '\0'. So the macro returns the total size occupied by the array in bytes, which is 11 bytes. But in the case of a character pointer like char *d or a string constant pointer like char *c = "ram", the variables store only an address pointing to the string, not the complete string itself. Therefore, the macro returns the size of the pointer variable, which is 8 bytes on a 64-bit system. This shows the difference between an actual character array and a pointer to a string.*/
