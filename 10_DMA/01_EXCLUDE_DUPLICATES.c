/*1)  Write a function that takes two sorted integer arrays as input, and returns an array of 
  integers from both arrays in sorted order, excluding duplicate numbers.  
  Assume that the input arrays are sorted and may not be of same sizes create all 
  three arrays dynamically. resize the merged array to remove the extra unused elements.

  eg., array1 : 10,12,13,14,15,16
array2 : 9,12,15,19,20
output array3 : 9,10,12,13,14,15,16,19,20  */

#include<stdio.h>
#include<stdlib.h>
void EXCLUDE_DUPLICATES(int a1_size,int a2_size,int a3_size,int *a1,int *a2,int *a3)
{
	int i=0,j=0,k=0;
	int *original=a3;
	while(i<a1_size && j<a2_size)
	{
		if(*a1==*a2)
		{
			if(k==0 || *(a3-1)!=*a3)
			{
				*a3=*a1;
				a3++;
				k++;
			}
			a1++;i++;
			a2++;j++;
		}
		else if(*a1>*a2)
		{
			if(k==0 || *(a3-1)!=*a2)
			{
				*a3=*a2;
				a3++;
				k++;
			}
			j++;
			a2++;
		}
		else 
		{
			if(k==0 || *(a3-1)!=*a1)
			{
				*a3=*a1;
				a3++;
				k++;
			}
			i++;
			a1++;
		}
	}
	while(i<a1_size)
	{
		if(k==0 || *(a3-1)!=*a1)
		{
			*a3=*a1;
			a3++;
			k++;
		}
		i++;
		a1++;

	}
	while(j<a2_size)
	{
		if(k==0 || *(a3-1)!=*a2)
		{
			*a3=*a2;
			a3++;
			k++;
		}
		j++;
		a2++;

	}
	original=realloc(original, (k)*sizeof(int));
	printf("\nAfter excluding duplicate elements are:\n");
	for(i=0;i<k;i++)
	{
		printf("%d ",original[i]);
	}

}
int main()
{
	int a1_size,a2_size;
	printf("\nEnter size of a1 and a2 :\n");
	scanf("%d%d",&a1_size,&a2_size);
	int *a1=(int *)malloc(a1_size*sizeof(int));
	int i;
	printf("\nenter array1 elements:");
	if(a1!=NULL)
	{
		for(i=0;i<a1_size;i++)
		{
			scanf("%d",&a1[i]);
		}
	}
	printf("\nenter array2 elements:");
	int *a2=(int *)malloc(a2_size*sizeof(int));

	if(a2!=NULL)
	{
		for(i=0;i<a2_size;i++)
		{

			scanf("%d",&a2[i]);
		}
	}

	printf("\nArray1 eelements are:");
	for(i=0;i<a1_size;i++)
	{
		printf("%d ",a1[i]);
	}
	printf("\nArray 2 eelements are:");
	for(i=0;i<a2_size;i++)
	{
		printf("%d ",a2[i]);
	}
	int a3_size=a1_size+a2_size;
	int *a3=(int*)malloc(a3_size*sizeof(int));
	if(a3!=NULL)
	{
		EXCLUDE_DUPLICATES(a1_size,a2_size,a3_size,a1,a2,a3);
	}

}
