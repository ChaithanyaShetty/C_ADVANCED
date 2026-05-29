//1) write a sort function to sort an array of integers using bubble sort.

#include<stdio.h>
#include<stdlib.h>
void BUBBLE(int *p)
{

	int *j=p,*k=p+1;
	int *o=p;
	int  size=5;

	int temp=0;
	while(size>0)
	{

		j=p;
		k=p+1;
		int count=size-1;
		while(count>0)
		{
			if(*j>*k)
			{
				temp=*j;
				*j=*k;
				*k=temp;

			}
			j++;
			k++;
			count--;

		}

		size--;


	}
	int l;
	printf("\nSorted Array elements are:");
	for(l=0;l<5;l++)
	{
		printf("%d ",*o);
		o++;
	}

}
int main(int argc,char* argv[])
{
	int a[5];
	int i;
	for(i=1;i<argc;i++)
	{
		a[i-1]=atoi(argv[i]);
	}

	printf("\nArray elements are:");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	BUBBLE(a);
}
