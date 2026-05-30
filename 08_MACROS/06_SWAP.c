//define a macro to generate swapping function for int, float ,
//double and character datatypes, as a generic function using macros.

#include<stdio.h>
#define SWAP(a,b,dt)  if(dt=='I'){int temp;temp=a;a=b;b=temp;printf("\na=%d b=%d",a,b);}\
			    else if(dt=='F'){float temp=a;a=b;b=temp;printf("\na=%f b=%f",a,b);}\
			    else{int temp=a;a=b;b=temp;printf("\na=%c b=%c",a,b);}
int main()
{

	int a=5,b=6;
	float c=2.2,d=3.6;
	char e='a',f='b';
	SWAP(a,b,'I');
	SWAP(c,d,'F');
	SWAP(e,f,'C');
}


