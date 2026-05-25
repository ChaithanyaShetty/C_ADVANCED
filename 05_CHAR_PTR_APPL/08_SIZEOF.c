//8)define a sizeof macro ,that will find the size of a given data type as parameter. use pointers.

#include<stdio.h>
#define SIZEOF(x) ((char *)((x*)0+1)-(char *)(x*)0)
int main()
{

	printf("\nint data type size is %zu",SIZEOF(int));
	printf("\nchar data type size is %zu",SIZEOF(char));
	printf("\nfloat data type size is %zu",SIZEOF(float));

	printf("\ndouble data type size is %zu",SIZEOF(double));

}

/*
   The macro works using pointer arithmetic to calculate the size of a datatype without using the built-in sizeof operator. In the expression ((t *)0), a pointer of datatype t is created with address 0. No actual memory is accessed; it is only used for calculation. When ((t *)0 + 1) is performed, the pointer moves by one element of type t. For example, if t is int, the pointer moves from address 0 to address 4 because an int occupies 4 bytes. Both pointers are then converted to char * because character pointers move byte-by-byte. Finally, subtracting the two character pointers gives the total number of bytes occupied by the datatype. Thus the macro returns the size of the datatype in bytes.*/
