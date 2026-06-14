//1) create an integer dynamically ,read and print its value.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*ptr;

	printf("\nEnter size of array");
	scanf("%d",&n);

	ptr=(int*)malloc(n*(sizeof(int)));
	int *temp=ptr;
	if(ptr == NULL)
	{
		printf("malloc failed\n");
		return 1;
	}
	else
	{
		int i;
		printf("\nEnter array elements:\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",(ptr+i));

		}
		printf("\nArray elements using pointer traversal:\n");
		for(i=0;i<n;i++)
		{
			printf("%d ",*temp);//here we cant free temp 
			temp++;
		}
		printf("\nArray elements using pointer Arithmetic:\n");
		for(i=0;i<n;i++)
		{
			printf("%d ",*(ptr+i));
			// temp++;
		}
		free(ptr);
	}
}

