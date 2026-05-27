/*5) Read an integer and print it back using function pointers for printf and scanf.

  printf declaration to use : int printf(char * , ...);
  scanf declaration to use : int scanf(char *, ...);*/

#include<stdio.h>
int main()
{
	int a;
	int (*FP)(const char*,...);
	FP=scanf;
	FP("%d",&a);
	FP=printf;
	FP("\na value is %d",a);
}
