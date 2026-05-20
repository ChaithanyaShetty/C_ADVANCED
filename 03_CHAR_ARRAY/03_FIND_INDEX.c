/*3) Read the names of students from a class. 
  write a function to Search for a given name as input, 
  if found in the array, display the index where the string was found matching.*/

#include<stdio.h>
#include<string.h>
void search(int r,int c,char a[r][c])
{
	int i,j,count=0;
	char search_name[c];
	printf("\nPlease enter searching name:\n");
	scanf("%s",search_name);
	printf("\nsearching sring is %s",search_name);
	int l=strlen(search_name);
	for(i=0;i<r;i++)
	{
		count=0;
		for(j=0;a[i][j]!='\0';j++)
		{

			if(a[i][j]==search_name[j])
			{
				count++;
			}

		}
		if(count==l)
		{
			printf("\nSearched string found at index %d\n",i);
		}
	}
}
int main()
{
	int r,c;
	printf("enter rows and coloumns:\n");
	scanf("%d%d",&r,&c);
	char names[r][c];
	int i;
	for(i=0;i<r;i++)
	{
		scanf("%s",names[i]);
	}
	printf("\nNames are: ");
	for(i=0;i<r;i++)
	{
		printf("%s ",names[i]);
	}
	search(r,c,names);

}
