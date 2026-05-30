/*Write down a macro to find out the biggest of two numbers.
  MAX(x,y) should define code to find biggest of x and y. 
  Implement array sorting function using this macro (Bubble sort)*/
#include<stdio.h>
#define BIG(a,b) if(a>b)\
	printf("a is big");\
	else \
	printf("b is big");
int main()
{
	BIG(2,3);

}
