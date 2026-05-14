////Write a program  for matrix addition and subtraction.

#include<stdio.h>
#include<stdlib.h>
void ADDITION(int r1,int c1, int a[r1][c1],int r2, int c2, int b[r2][c2])
{
	int c[r1][c1];
	int i,j;
	printf("\nMatrix addition is :\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			c[i][j]=(a[i][j] +b[i][j]);
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}

}

void SUBTRACTION(int r1,int c1, int a[r1][c1],int r2, int c2, int b[r2][c2])
{
	int c[r1][c1];
	int i,j;
	printf("\nMatrix subtraction  is :\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			c[i][j]=(a[i][j] -b[i][j]);
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}

}
int main()
{
	int r1,c1,r2,c2;
	printf("Enter rows and coloumns of matrix1:\n");
	scanf("%d%d",&r1,&c1);
	printf("Enter rows and coloumns of matrix2:\n");
	scanf("%d%d",&r2,&c2);
	int a[r1][c1],b[r2][c2];
	int i,j;
	printf("Enter matrix1 elements:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter matrix2 elements:\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	printf("\nMatrix1 elements are:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix2 elements are:\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}

	if(r1==r2 && c1==c2)
	{    
		ADDITION(r1,c1,a,r2,c2,b);
		SUBTRACTION(r1,c1,a,r2,c2,b);
	}   
	else{
		printf("\nNot valid");
		exit(1);
	}



}
