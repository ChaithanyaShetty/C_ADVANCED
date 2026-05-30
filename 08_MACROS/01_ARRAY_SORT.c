/*Write down a macro to find out the biggest of two numbers.
  MAX(x,y) should define code to find biggest of x and y. 
  Implement array sorting function using this macro (Bubble sort)*/
#include<stdio.h>
#define BIG(a,b) (a>b?a:b)

int main()
{
	int a[5]={3,2,5,1,4};\
		 int i,j,temp;
	int r;
	for(i=0;i<(5-1);i++)
	{
		for(j=0;j<4;j++)
		{
			if(BIG(a[j],a[j+1])==a[j])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;

			}

		}
	}
	printf("\nAfter sort Array elements are:");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}


}
