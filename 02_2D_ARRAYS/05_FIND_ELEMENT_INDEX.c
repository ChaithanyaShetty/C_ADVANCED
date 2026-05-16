/*Search for an element in a two dimentional array, and print its position - as row and column numbers. 
  write a search function that will receive the array and return row and column indexes as output.*/



#include<stdio.h>
void find_row_col(int r,int c, int find[r][c])
{
	int find_element;
	int row_pos=-1,col_pos=-1;
	printf("Enter the element to find in matrix:");
	scanf("%d",&find_element);
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(find[i][j]==find_element)
			{
				row_pos=i;
				col_pos=j;

			}
		}
	}

	if(row_pos>=0 && col_pos >=0)
	{
		printf("\nFind_element matched matrix at  %d row_pos=%d and col_pos=%d",find_element,row_pos,col_pos);
	}
}
int main()
{
	int r,c;
	printf("Enter rows and coloumns for the matrix");
	scanf("%d%d",&r,&c);
	int a[r][c];
	int i,j;
	printf("\nEnter matrix elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nMatrix elements are:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	find_row_col(r,c,a);
}
