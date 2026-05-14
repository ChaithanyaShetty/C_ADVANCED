//Write a program  for matrix multiplication.

#include<stdio.h>
void MULTIPLICATION(int r1, int c1, int a[r1][c1],int r2, int c2, int b[r2][c2])
{
	int i,j,k;
	int c[r1][c2];
	printf("Multiplication is :\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			c[i][j]=0;
			for(k=0;k<c1;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
			printf("%d ",c[i][j]);

		}
		printf("\n");
	}



}
int main()
{
	int r1,c1,r2,c2;
	printf("\nPlease enter matrix1 rows and coloumns:\n");
	scanf("%d%d",&r1,&c1);
	printf("\nPlease enter matrix2 rows and coloumns:\n");
	scanf("%d%d",&r2,&c2);

	int a[r1][c1],b[r2][c2];
	int i,j;
	printf("Enter elements of Matrix1: \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter elements of Matrix2: \n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	printf("Matrix1 elements are: \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Matrix2 elements are: \n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}

	if(c1==r2)
	{
		MULTIPLICATION(r1,c1,a,r2,c2,b);
	}
	else
	{
		printf("Matrix multiplication not possible");
	}



}
