//5) Define a generic function, for different types of array printing ,
//by taking array and array size as arguments.

#include<stdio.h>
#define SIZE 5
#define GEN_FUN(dt,p,d) dt p(dt *ptr){int i;for(i=0;i<SIZE;i++){\
	printf(" %"#d,ptr[i]);}}

GEN_FUN(int,print_intarray,d);
GEN_FUN(float,print_floatarray,f);
GEN_FUN(char,print_chararray,c);
int main()
{
	int a[SIZE]={1,2,3,4,5};
	float b[SIZE]={1.1,2.2,3.3,4.4,5.5};
	char c[SIZE]={'a','b','c','d','e'};

	print_intarray(a);
	print_floatarray(b);
	print_chararray(c);

}
