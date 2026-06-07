/*6)  define a macro to generate swapping function for int, float , double and character
  datatypes, as a generic function using macros.*/


#include<stdio.h>
#define GEN_FUN(dt,swap) dt swap(dt *a,dt *b){\
	dt t;\
	t=*a;\
	*a=*b;\
	*b=t;}


GEN_FUN(int,swap_int);
GEN_FUN(float,swap_float);
GEN_FUN(char,swap_char);

int main()
{
	int a=5,b=6;
	float c=1.234,d=2.456;
	char e='a',f='b';
	swap_int(&a,&b);
	printf("\na=%d,b=%d",a,b);
	swap_float(&c,&d);
	printf("\na=%f,b=%f",c,d);
	swap_char(&e,&f);
	printf("\na=%c,b=%c",e,f);

}
