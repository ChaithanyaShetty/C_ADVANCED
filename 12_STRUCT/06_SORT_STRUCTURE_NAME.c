/*Create the below structure with nested date data type for date of birth and  date of joining members.
  struct student
  {
  int ID;
  char name[50];
  int marks[6];
  struct date dob, doj;
  float per;
  char gender;
  };

  6)Sort the array in the order of their names  and print the data using the above print function. 
  make use of swap function to sort the structures.*/


//ENTIRE STRUCTURE IS SWAPPED ACCORDING TO SORT
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	int ID;
	char name[50];
	int marks[6];
	//struct date dob, doj;
	float per;
	char gender;
};
void SORT(struct student *p, int size)
{

	struct student temp;
	int i,j;
	for(i=0;i<size-1;i++)
	{   struct student *p1=p;
		struct student *p2=p+1;
		for(j=0;j<(size-i-1);j++)
		{
			if(strcmp(p1->name,p2->name)>0)
			{
				temp=*p1;
				*p1=*p2;
				*p2=temp;
			}
			p1++;
			p2++;
		}
	}
	printf("\nAfter sort names are: \n");
	for(i=0;i<size;i++)
	{

		printf(" %d %s ",p[i].ID,p[i].name);
	}
}
int main()
{
	int size;
	printf("\nEnter size of array: ");
	scanf("%d",&size);
	struct student s[size];
	int i;
	for(i=0;i<size;i++)
	{
		printf("Student %d: ",(i+1));
		scanf(" %d %s",&s[i].ID,s[i].name);
	}
	printf("\nNames are: \n");
	for(i=0;i<size;i++)
	{

		printf(" %d %s ",s[i].ID,s[i].name);
	}
	SORT(s,size);
}
