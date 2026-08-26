/*Create the below structure with nested date data type for date of birth and date of joining
  members.

  struct student { 
  int ID; char name[50]; int marks[6]; struct date dob, doj; float per; char gender; };

  Write a date comparison function to take two date variables as arguments and return 1/0 
  based on which date is older.*/

#include<stdio.h>
#include<stdlib.h>

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


struct student s1,s2;
int OLDER(struct date *p1, struct date *p2)
{
	if((p1->y == p2->y) && (p1->m == p2->m) &&(p1->d == p2->d))
	{
		return 2;
	}
	printf("\nHI");
	if(p1->y > p2->y)
	{
		return 0;
	}
	else if((p1->y == p2->y) && (p1->m > p2->m))
	{
		return 0;
	}
	else if((p1->y == p2->y) && (p1->m == p2->m) &&(p1->d > p2->d))
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	printf("\nEnter student 1 dob:");
	scanf("%d-%d-%d",&s1.dob.d,&s1.dob.m,&s1.dob.y);
	printf("\nEnter student 2 dob:");
	scanf("%d-%d-%d",&s2.dob.d,&s2.dob.m,&s2.dob.y);


	printf("\nstudent 1 dob:");
	printf("%d-%d-%d",s1.dob.d,s1.dob.m,s1.dob.y);
	printf("\nstudent 2 dob:");
	printf("%d-%d-%d",s2.dob.d,s2.dob.m,s2.dob.y);

	int r= OLDER(&s1.dob,&s2.dob);

	if(r==1)
		printf("\nS1 is Elder");
	else if(r==0)
		printf("\nS2 is Elder");
	else
		printf("\nBoth are equal");


}
