/*3) Implement the calculator program using Command line arguments

  eg., input:  >./calc   56 + 671
output : 727
note: when giving * in commandline, always give "*"*/

#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[])
{

	int a,b;
	a=atoi(argv[1]);
	b=atoi(argv[3]);

	if(argv[2][0]=='+')
	{
		printf("\nSum is %d",(a+b));
	}
	else if(argv[2][0]=='-')
	{
		printf("\nSub is %d",(a-b)); 
	}
	else if(argv[2][0]=='*')
	{
		printf("\nMul is %d",(a*b)); 
	}
	else if(argv[2][0]=='/')
	{
		printf("\nDivv is %d",(a/b)); 
	}
	else if(argv[2][0]=='%')
	{
		printf("\nMod is %d",(a%b)); 
	}
	else
	{
		printf("\nNot valid operator");
	}

}

