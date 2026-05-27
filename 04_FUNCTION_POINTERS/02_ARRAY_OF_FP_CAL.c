//2)Rewrite the calculator program using array of function pointers.

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
	int (*ptr[5])(int,int)={&add,&sub,&mul,&divv,&mod};
	printf("\nSum is %d",ptr[0](10,20));
	printf("\nDiff is %d",ptr[1](10,20));

	printf("\nMul is %d",ptr[2](10,20));

	printf("\nDivv is %d",ptr[3](10,20));

	printf("\nMod is %d",ptr[4](10,20));

	int i;
	printf("\nVersion 1 printing\n");
	for(i=0;i<5;i++)
	{
		printf("\n%d ",(*ptr[i])(10,20));
	}
	printf("\nVersion 2 printing\n");
	for(i=0;i<5;i++)
	{
		printf("\n%d ",ptr[i](10,20));
	}



}

