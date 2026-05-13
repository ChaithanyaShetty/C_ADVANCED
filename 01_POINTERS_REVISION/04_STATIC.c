/*4) Write a function that communicates with main using a single static variable without taking any input arguments.
  Everytime function returns something using the static variable,after using it, main sends another input using the same variable and calls the function again.
  eg., print the square of each number of an array :
  for each number of the array :
  call the function
  main gets the static variable address as return value from function.
  main puts the array element in static variable.
  in the function :
  create static variable.
  if static variable value is not zero, print its square.
  function sends static variable address back to main.*/


#include<stdio.h>
void *commute()
{
	static int x=0;
	if(x!=0)
		printf("\nsquare is %d",(x*x));
	return &x;
}
int main()
{
	int a[5]={1,2,3,4,5};
	printf("\nArray elements are: ");
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<5;i++)
	{
		int *p=commute();
		*p=a[i];
	}
	commute();
}
