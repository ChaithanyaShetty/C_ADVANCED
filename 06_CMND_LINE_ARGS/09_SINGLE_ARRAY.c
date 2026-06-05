/*8)read a set of words into a 2 dimentional array. Make a single sentence out of the words with 
  space as a delimitter and store in another single dimentional character array and display. 
  you can use string concatenation function to do this.*/

#include<stdio.h>
int main()
{
	int r,c;
	printf("enter rows and coloumns:");
	scanf("%d%d",&r,&c);
	char names[r][c];
	int i,j;
	for(i=0;i<r;i++)
	{
		scanf("%s",names[i]);
	}
	int l=(r*c);
	int k=0;
	char a[l];
	for(i=0;i<r;i++)
	{
		for(j=0;names[i][j]!='\0';j++)
		{
			a[k]=names[i][j];
			k++;
		}
		if(names[i][j]=='\0' && i!=(r-1))
		{
			a[k]=' ';
			k++;
		}
	}
	a[k]='\0';
	printf("\nsingle char array is :");
	printf("%s",a);

}
