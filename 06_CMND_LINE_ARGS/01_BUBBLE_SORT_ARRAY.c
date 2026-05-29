//1) write a sort function to sort an array of integers using bubble sort.

#include<stdio.h>
#include<stdlib.h>
void BUBBLE(int a[])
{
	int i,j;
	// int c=a[0];
	int temp=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<(5-1);j++)
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;

			}

	}
	printf("\nSorted Array elements are:");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
}
int main(int argc, char*argv[])
{

	printf("\nArgc count is %d",argc);
	int a[5];
	int i;
	for(i=1;i<argc;i++)
	{
		a[i-1] = atoi(argv[i]);
	}
	printf("\nArray elements are:");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	BUBBLE(a);
}
