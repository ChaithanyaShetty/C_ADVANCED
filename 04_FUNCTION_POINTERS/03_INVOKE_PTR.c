/*3)"Write the calculator program using a function that accepts 
  a function pointer and the operand values as arguments and invokes it. 
  In main function, simply invoke this function by sending appropriate function address, 
  based on operator chosen. eg., in main case '+' :invokeptr(add , x,y); 
  invokeptr(int (*fptr) (int,int) , int x, int y) { printf(""%d\n"",fptr(x,y)); }"*/

#include<stdio.h>
int add(int a, int b)
{
	return a+b;
}
int sub(int a, int b)
{
	return a-b;
}
int mul(int a, int b)
{
	return a*b;
}
int divv(int a, int b)
{
	return a/b;
}
int mod(int a, int b)
{
	return a%b;
}
void invokeptr(int (*fptr) (int,int) , int x, int y)
{ 
	printf("\n %d \n",fptr(x,y)); 

}
int main()
{
	int a,b;
	printf("Enter a and b values\n");
	scanf("%d%d",&a,&b);
	char ch;
	printf("\nenter any opearand(+,-,*,/,mod) to perform arithmetic operation\n");
	scanf(" %c",&ch);
	printf("\narguments a=%d b=%d and operand ch=%c",a,b,ch);

	switch(ch)
	{
		case '+' : invokeptr(add,a,b);break;
		case '-' : invokeptr(sub,a,b);break;
		case '*' : invokeptr(mul,a,b);break;
		case '/' : invokeptr(divv,a,b);break;
		case '%' : invokeptr(mod,a,b);break;

	}

}
