/*Declare a two-dimensional array of elements for sales details of a store,
  for each item, for each sales man. Take the sales values as input and print the array in matrix form.
  Find out and print the following :
  1 ) Total sales by each sales man
  2 ) Total sales for a item
  3 ) Total sales*/
#include<stdio.h>
int main()
{
	int sales_man,items;
	printf("enter sales_man and items\n");
	scanf("%d%d",&sales_man,&items);
	int sales[sales_man][items];
	int i,j;
	printf("\nplease enter the values of sales:\n");
	for(i=0;i<sales_man;i++)
	{
		for(j=0;j<items;j++)
		{
			scanf("%d",&sales[i][j]);
		}
	}

	for(i=0;i<sales_man;i++)
	{
		for(j=0;j<items;j++)
		{
			// printf(" Sales_man %d sold items_%d %d\n",(i+1),(j+1),sales[i][j]);
			printf("%d ",sales[i][j]);
		}
		printf("\n");
	}

	//Total sales by each sales man
	int total_sales_by_each_sales_man=0;

	for(i=0;i<sales_man;i++)
	{
		total_sales_by_each_sales_man=0;
		for(j=0;j<items;j++)
		{
			total_sales_by_each_sales_man+=sales[i][j];
		}
		printf("Total sales by sales_man%d is %d",(i+1),total_sales_by_each_sales_man);
		printf("\n");
	}

	//Total sales for a item
	int total_sale_for_a_item=0;

	for(i=0;i<items;i++)
	{
		total_sale_for_a_item=0;
		for(j=0;j<sales_man;j++)
		{
			total_sale_for_a_item+=sales[j][i];
		}
		printf("Total sales for item_%d is %d",(i+1),total_sale_for_a_item);
		printf("\n");
	}

	//Total sales
	int total_sales=0;

	for(i=0;i<sales_man;i++)
	{

		for(j=0;j<items;j++)
		{
			total_sales+=sales[i][j];
		}
	}
	printf("Total sales  is %d",total_sales);
	//printf("\n");

}
