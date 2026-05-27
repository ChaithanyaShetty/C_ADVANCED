/*4)Write the calculator program using a function that accepts an array of function pointers 
  and the operand values and operator character as arguments and invokes appropriate function 
  based on the character. In main function, simply invoke this function by sending the array
  and operator character and operands as input. eg., in main case '+' :invokeptr( fparr, x,y, ch);

  invokeptr(int (*fptr[]) (int,int) , int x, int y ,char ch) 
  { //based on ch value, choose which index to apply on fptr and invoke the function }

 */

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
void invokeptr(int (*fparr[]) (int,int) , int x, int y ,char ch) 
{ 
	if(ch=='+')
	{
		printf("sum is %d",(fparr[0](x,y)));

	}
	else if(ch=='-') 
	{
		printf("Dif is %d",(fparr[1](x,y)));
	}
	else if(ch=='*')
	{
		printf("Mul is %d",(fparr[2](x,y)));

	}
	else if(ch=='/')
	{
		printf("Div is %d",(fparr[3](x,y)));
	}
	else
	{
		printf("Mod is %d",(fparr[4](x,y)));
	}

}
int main()
{
	int a,b;
	printf("Enter a and b values\n");
	scanf("%d%d",&a,&b);
	char ch;


	int (*fparr[5])(int,int)={add,sub,mul,divv,mod};

	while(1)
	{  printf("\nenter any opearand(+,-,*,/,mod) to perform arithmetic operation\n");
		scanf(" %c",&ch);
		switch(ch)
		{
			case '+': invokeptr( fparr, a,b, ch);break;
			case '-': invokeptr( fparr, a,b, ch);break;
			case '*': invokeptr( fparr, a,b, ch);break;
			case '/': invokeptr( fparr, a,b, ch);break;
			case '%': invokeptr( fparr, a,b, ch);break;
			default: printf("\nnot valid");
		}


	}

}
