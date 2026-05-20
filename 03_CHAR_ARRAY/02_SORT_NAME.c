/*2) Create a two dimentional character array. Read the strings from user.
  Sort the array in ascending order and display. write a seperate function for sorting.*/


#include<stdio.h>
#include<string.h>
int compare(char s1[],char s2[])
{
	int i=0;
	while(s1[i]!='\0' && s2[i]!='\0')
	{
		if(s1[i]==s2[i])
		{
			i++;
		}
		else if(s1[i]>s2[i])
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
	if(s1[i]!='\0' && s2[i]=='\0')
		return 1;
	if(s1[i]=='\0' && s2[i]!='\0')
		return -1;
	return 0;
}
void SORT(int r, int c, char a[r][c])
{
	int i,j,R;
	char temp[c];
	for(i=0;i<r-1;i++)
	{
		for(j=i+1;j<r;j++)
		{
			R=compare(a[i],a[j]);
			if(R==1)
			{
				strcpy(temp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],temp);

			}
			if(R==0)
			{
				printf("\nStrings are equal %s=%s\n",a[i],a[j]);
			}
		}
	}
	printf("\nSorted Names are :");
	for(i=0;i<r;i++)
	{
		printf("%s ",a[i]);
	}

}
int main()
{
	int r,c;
	printf("\nEnter rows and cloumns");
	scanf("%d%d",&r,&c);
	char names[r][c];
	int i;
	for(i=0;i<r;i++)
	{
		scanf("%s",names[i]);
	}
	printf("\nNames are :");
	for(i=0;i<r;i++)
	{
		printf("%s ",names[i]);
	}
	SORT(r,c,names);

}
