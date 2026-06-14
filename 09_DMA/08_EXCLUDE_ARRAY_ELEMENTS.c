/*8)  Write a function that takes two sorted integer arrays as input, and returns an array of 
  integers from both arrays in sorted order, excluding duplicate numbers. 
  Assume that the input arrays are sorted.
  eg., array1 : 10,12,13,14,15,16
array2 : 9,12,15,19,20
output array3 : 9,10,12,13,14,15,16,19,20    */

#include<stdio.h>
#include<stdlib.h>
void EXCLUDE_DUPLICATES(int a1_size,int a2_size,int a3_size,int *a1,int *a2,int *a3)
{
	int i=0,j=0,k=0;
	int *result=a3;
	while(i<a1_size && j<a2_size)
	{

		if(*a1==*a2)
		{

			if(k==0 || *(a3-1)!=*a1 )
			{
				*a3=*a1;

				a3++;
				k++;
			}
			i++;
			j++;
			a1++;a2++;

		}
		else if(*a1>*a2)
		{
			if(k==0 || *(a3-1)!=*a2)
			{

				*a3=*a2;
				a3++;
				k++;
			}
			a2++;

			j++;

		}
		else
		{
			if(k==0 || *(a3-1)!=*a1)
			{
				*a3=*a1;
				a3++;
				k++;
			}
			a1++;

			i++;
		}

	}
	while(i<a1_size)
	{
		if( *(a3-1)!=*a1)
		{
			*a3=*a1;
			a3++;
			k++;
		}
		a1++;

		i++;

	}
	while(j<a2_size)
	{
		if( *(a3-1)!=*a2)
		{
			*a3=*a2;
			a3++;
			k++;
		}
		a2++;
		j++;

	}

	printf("\nResultant array elements are :\n");
	for(i=0;i<k;i++)
	{
		printf("%d ",*(result+i));
	}


}
int main()
{
	int a1_size,a2_size;
	printf("\nEnter array1 size:");
	scanf("%d",&a1_size);
	printf("\nEnter array2 size:");
	scanf("%d",&a2_size);

	int *a1=(int *)malloc(a1_size*sizeof(int));
	int *a2=(int *)malloc(a2_size*sizeof(int));
	int i;
	if(a1!=NULL)
	{
		printf("\nEnter elments of array1:");
		for(i=0;i<a1_size;i++)
		{
			scanf("%d",(a1+i));
		}
		printf("\nArray1 elements are:\n");
		for(i=0;i<a1_size;i++)
		{
			printf("%d ",*(a1+i));
		}

	}
	if(a2!=NULL)
	{
		printf("\nEnter elments of array2:");
		for(i=0;i<a2_size;i++)
		{
			scanf("%d",(a2+i));
		}
		printf("\nArray2 elements are:\n");
		for(i=0;i<a2_size;i++)
		{
			printf("%d ",*(a2+i));
		}

	}
	int a3_size=a1_size+a2_size;
	int *a3=(int *)malloc(a3_size*sizeof(int));
	if(a3!=NULL)
		EXCLUDE_DUPLICATES(a1_size,a2_size,a3_size,a1,a2,a3);
}

