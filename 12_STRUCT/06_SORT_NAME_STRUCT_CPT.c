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

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct date
{
	int d,m,y;
};
struct student
{
	int ID;
	char name[50];
	int marks[6];
	struct date dob, doj;
	float per;
	char gender;
};
void SORT(struct student *s,int size)
{
	struct student temp;
	int i,j;
	for(i=0;i<(size-1);i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(strcmp((s + j)->name, (s + j + 1)->name)>0)
			{
				temp=*(s+j);
				*(s+j)=*(s+j+1);
				*(s+j+1)=temp;


			}
		}
	}

	printf("\nAfter Sort students data is : ");
	for(i=0;i<size;i++)
	{
		printf("\nStudent %d: ",(i+1));
		printf("ID:%d Name:%s",s[i].ID,s[i].name);
	}


}
int main()
{
	int size;
	printf("\nEnter size of struct: ");
	scanf("%d",&size);
	struct student s[size];
	int i;
	printf("\nEnter student data: ");
	for(i=0;i<size;i++)
	{
		printf("\nStudent %d: ",(i+1));
		scanf(" %d %s",&s[i].ID,s[i].name);
	}
	printf("\nStudents data is : ");
	for(i=0;i<size;i++)
	{
		printf("\nStudent %d: ",(i+1));
		printf("ID:%d Name:%s",s[i].ID,s[i].name);
	}

	SORT(s,size);
}

