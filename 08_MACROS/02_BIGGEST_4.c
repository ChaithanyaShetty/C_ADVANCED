//Write down a macro to find the biggest of four numbers using biggest of 2 macro.

#include<stdio.h>
#define BIG(x,y) (x>y?x:y)
int main()
{
	int a=10,b=870,c=5,d=920;
	int FIRST_TWO=BIG(a,b);
	int SECOND_TWO=BIG(c,d);
	printf("\nBiggest of four is %d",(BIG(FIRST_TWO,SECOND_TWO)));

}



