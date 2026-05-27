/*1)Write the calculator program using function pointers for add, sub, mul, div and mod functions,
  using a single function pointer.*/

#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int sub(int a, int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int divv(int a,int b)
{
	return a/b;
}
int mod(int a,int b)
{
	return a%b;
}
int main()
{
	int result;
	int (*ptr)(int ,int)=&add;
	result=(*ptr)(10,20);
	printf("\nSum is %d",result);
	ptr=&sub;
	result= ptr(10,20);
	printf("\nDiff is %d",result);
	ptr=mul;
	result= (*ptr)(10,20);
	printf("\nMul is %d",result);
	ptr=divv;
	result= (*ptr)(10,20);
	printf("\nDiv is %d",result);
	ptr=mod;
	result= (*ptr)(10,20);
	printf("\nMOD is %d",result);





}

