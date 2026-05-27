/*6) sorting a list of names received from keyboard, with options using call back functions.
1 :  sort with case sensitivity (strcmp)
2 : sort with out case sensitivity (stricmp)*/


#include<stdio.h>
#include<string.h>
#include<strings.h>
void SORT(int r,int c,char names[r][c],int (*cmp) (const char*,const char*))
{
	int i,j;
	char temp[c];
	for(i=0;i<r-1;i++)
	{
		for(j=i+1;j<r;j++)
		{
			if(cmp(names[i],names[j])>0)
			{
				strcpy(temp,names[i]);
				strcpy(names[i],names[j]);
				strcpy(names[j],temp);

			}
		}
	}

	printf("\nSorted names are\n:");
	for(i=0;i<r;i++)
	{
		printf("%s ",names[i]);
	}
}
int main()
{
	int r,c;
	printf("Enter rows and coloumns: ");
	scanf("%d%d",&r,&c);
	char names[r][c];
	int i;
	for(i=0;i<r;i++)
	{
		scanf("%s",names[i]);
	}
	int (*cmp)(const char*,const char *);
	printf("\nEnter your choice");
	printf("\n1:strcmp");
	printf("\n2.strcasecmp");
	int choice;
	scanf("%d",&choice);
	if(choice==1)
	{
		cmp=strcmp;
	}
	else
	{
		cmp=strcasecmp;
	}
	SORT(r,c,names,cmp);
}
