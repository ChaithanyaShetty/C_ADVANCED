/*Define  a macro that receives an array and the number of elements in the array as arguments. 
  Write a program using this macro to print out the elements of the array.
  Try using this macro for different data types of arrays.*/

#include<stdio.h>
#define SIZE 5
#define PRINT_INT(A,size,i) for(i=0;i<size;i++)\
{printf("%d ",A[i]);}
#define PRINT_FLOAT(A,size,i) for(i=0;i<size;i++)\
{printf("%f ",A[i]);}
#define PRINT_CHAR(A,size,i) for(i=0;i<size;i++)\
{printf("%c ",A[i]);}
int main()
{

	int i=0;
	int a[SIZE]={1,2,3,4,5};
	float f[SIZE]={1.1,2.2,3.3,4.4,5.5};
	char c[SIZE]={'a','b','c','d','e'};
	PRINT_INT(a,SIZE,i);
	PRINT_FLOAT(f,SIZE,i);
	PRINT_CHAR(c,SIZE,i);
}



