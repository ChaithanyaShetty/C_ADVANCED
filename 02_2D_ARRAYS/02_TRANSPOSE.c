/*Write the following program :
  Declare a two dimensional array of elements and find and print its transpose.
  eg., if the matrix is :       
  1 3
  4 5
  7 8

  its transpose should be :     
  1 4 7
  3 5 8  */

#include<stdio.h>
void TRANSPOSE(int r, int c,int MATRIX[r][c])
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",MATRIX[i][j]); 
		}
		printf("\n");
	}
	printf("After Transpose\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d ",MATRIX[j][i]); 
		}
		printf("\n");
	}


}
int main()
{
	int r,c;
	printf("enter rows:\n");
	scanf("%d",&r);
	printf("\nenter coloumn:\n");
	scanf("%d",&c);
	int matrix[r][c];
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("Matrix elements are :\n");
	TRANSPOSE(r,c,matrix);
}
