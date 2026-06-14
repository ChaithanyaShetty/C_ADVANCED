/*8)  Write a function that takes two sorted integer arrays as input, and returns an array of integers from both arrays in sorted order, excluding duplicate numbers. 
  Assume that the input arrays are sorted.
  eg., array1 : 10,12,13,14,15,16
array2 : 9,12,15,19,20
output array3 : 9,10,12,13,14,15,16,19,20*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a1_size,a2_size;
	int j=0;
	printf("\nEnter array1 size");
	scanf("%d",&a1_size);
	printf("\nEnter array2 size");
	scanf("%d",&a2_size);

	int *a1=(int *)malloc((a1_size)* (sizeof(int)));
	int *a2=(int *)malloc((a2_size)* (sizeof(int)));
	int i;
	if(a1!=NULL)
	{
		printf("\nEnter array elements:\n");
		for(i=0;i<a1_size;i++)
		{
			scanf("%d",&a1[i]);
		}


	}
	else
	{
		printf("\nMemory allocation failed\n");
		return 1;
	}
	if(a2!=NULL)
	{
		printf("\nEnter array elements:\n");
		for(i=0;i<a2_size;i++)
		{
			scanf("%d",&a2[i]);

		}

	}
	else
	{
		printf("\nMemory allocation failed\n");
		return 1;
	}
	printf("\nArray1 elements:\n");
	for(i=0;i<a1_size;i++)
	{
		printf("%d ",a1[i]);
	}
	int l=i;
	printf("\nArray2 elements:\n");
	for(i=0;i<a2_size;i++)
	{
		printf("%d ",a2[i]);
	}
	l=l+i;
	printf("\nl value is %d",l);

	int *a3=(int *)malloc(l*(sizeof(int)));

	if(a3!=NULL)
	{
		int k;
		i=0,k=0,j=0;
		while(i<a1_size && j<a2_size)
		{
			if(a1[i]==a2[j])
			{
				a3[k]=a1[i];
				i++;k++;j++;

			}
			else if(a1[i]>a2[j])
			{
				a3[k]=a2[j];
				k++;
				j++;
			}
			else
			{
				a3[k]=a1[i];
				k++;
				i++;
			}
		}

		while(i<a1_size)
		{
			a3[k]=a1[i];
			i++;
			k++;
		}
		while(j<a2_size)
		{
			a3[k]=a2[j];
			j++;
			k++;
		}

		printf("\nK value is %d",k);

		printf("\nAfter Excluding all duplicates Array3 elements:\n");
		for(i=0;i<k;i++)
		{
			printf("%d ",a3[i]);
		}
	}
	else
	{
		printf("\nMemory allocation failed\n");
		return 1;
	}

}
