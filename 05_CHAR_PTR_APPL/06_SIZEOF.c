//6) define a sizeof macro ,that will find the size of a given variable as parameter, using pointers.

#include<stdio.h>
#define SIZEOF(x)  ((char *)(&x+1)- (char *)&x)
//#define SIZEOF(x)  ((&a+1)-&a)

int main()
{
	int a=4;
	char b='c';
	float c=3.66;
	double d=9.84567892;
	printf("\nSize of int is %zu",SIZEOF(a));
	printf("\nSize of char is %zu",SIZEOF(b));
	printf("\nSize of float is %zu",SIZEOF(c));
	printf("\nSize of double is %zu",SIZEOF(d));
}

/*
   In the macro ((&x+1)-&x), both pointers are of the same datatype (for example int *). When pointer subtraction happens, C does not return the difference in bytes; it returns the number of elements between the two addresses. So if an int variable is stored at address 1000, then &x+1 becomes 1004 because int occupies 4 bytes. During subtraction, the compiler internally divides the byte difference by sizeof(int), so (1004-1000)/4 becomes 1. That is why the result is 1. 

   But in the macro ((char *)(&x+1) - (char *)&x), both pointers are converted to char *. Since sizeof(char) is always 1 byte, pointer subtraction now works byte-by-byte. So the subtraction becomes 1004-1000 = 4, which gives the actual size of the datatype in bytes.*/
