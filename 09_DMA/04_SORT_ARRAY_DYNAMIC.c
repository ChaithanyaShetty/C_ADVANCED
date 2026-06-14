//4) Create a dynamic array of integers. Take input from user , sort the array and display the output.


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("\nEnter size of array");
	scanf("%d",&n);
	int *ptr;
	ptr=(int*)malloc(n*sizeof(int));
	int *start;
	int *start_next;
	if(ptr!=NULL)
	{

		int i,j,temp;;
		printf("\nEnter array elements:\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",(ptr+i));
		}
		printf("\nArray elements are :\n");
		for(i=0;i<n;i++)
		{
			printf("%d ",*(ptr+i));
		}

		for(i=0;i<n-1;i++)
		{	start=ptr;
			start_next=ptr+1;
			for(j=i+1;j<n;j++)
			{
				if(*start > *start_next)
				{
					temp=*start;
					*start=*start_next;
					*start_next=temp;
				}

				start_next++;
			start++;

			}
		}

		printf("\nSorted array elements are using Pointer traversal :\n");
		for(i=0;i<n;i++)
		{
			printf("%d ",*(ptr+i));
		}  
		/* for(i=0;i<n-1;i++)
		   {
		   for(j=i+1;j<n;j++)
		   {
		   if(*(ptr+i) > *(ptr+j))
		   {
		   temp=*(ptr+i);
		 *(ptr+i)=*(ptr+j);
		 *(ptr+j)=temp;


		 }

		 }


		 }
		 printf("\nSorted array elements are using pointer arithmetic :\n");
		 for(i=0;i<n;i++)
		 {
		 printf("%d ",*(ptr+i));
		 }*/
	}
	else
	{
		printf("\nMemory allocation failed");
		return 1;
	}
	free(ptr);
}
