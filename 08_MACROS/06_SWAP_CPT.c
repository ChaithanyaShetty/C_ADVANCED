#include<stdio.h>

#define SWAP_FUNC(type,name)        \
	void swap_##name(type *a,type *b)   \
{                                   \
	type temp;                      \
	temp=*a;                        \
	*a=*b;                          \
	*b=temp;                        \
}

	SWAP_FUNC(int,int)
	SWAP_FUNC(float,float)
SWAP_FUNC(char,char)

int main()
{
	int a=5,b=6;
	float c=2.2,d=3.6;
	char e='a',f='b';

	swap_int(&a,&b);
	swap_float(&c,&d);
	swap_char(&e,&f);

	printf("\na=%d b=%d",a,b);
	printf("\nc=%f d=%f",c,d);
	printf("\ne=%c f=%c",e,f);
}
