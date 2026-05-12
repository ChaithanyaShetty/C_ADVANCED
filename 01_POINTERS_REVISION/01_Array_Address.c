/*1) Declare an integer array of size 10 and initialize it to some values. 
  Print the addresses of each element of the array using a pointer. 
  using indirection operator , print the value stored in each element of the array*/
#include<stdio.h>
int main()
{
	int size;
	printf("\nEnter array size: ");
	scanf("%d",&size);
	int a[size];
	int i;
	int *p=NULL;
	p=a;
	printf("\nEnter array elements: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nArray Elements are:" );
	for(i=0;i<size;i++)
	{
		printf("%d ",*p);
		p++;
	}


	printf("\nArray address are: ");

	for(i=0;i<size;i++)
	{
		printf("%p ",p);
		p++;
	}




}
