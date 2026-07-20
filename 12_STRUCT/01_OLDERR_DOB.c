/*1) Write a date comparison function to take two date variables as arguments
  and return 1/0 based on which date is older.
  struct student
  {
  int ID;
  char name[50];
  int marks[6];
  int d,m,y;
  float per;
  char gender;
  };
 */

#include<stdio.h>
#include<stdlib.h>

struct student
{
	int ID;
	char name[50];
	int marks[6];
	float per;
	char gender;
	struct DOB
	{
		int d,m,y;
	}a;
};


struct student s1,s2;
int OLDER(struct student *p1,struct student *p2)
{
	if(((p1->a.d)==(p2->a.d)) && ((p1->a.y)==(p2->a.y)) && ((p1->a.m)==(p2->a.m)))
	{
		return 2;
	}
	if((p1->a.y)>p2->a.y)
	{
		return 0;
	}
	else if(((p1->a.m)>(p2->a.m)) && ((p1->a.y)==(p2->a.y)))
	{
		return 0;
	}
	else
	{
		if(((p1->a.d)>(p2->a.d)) && ((p1->a.y)==(p2->a.y)) && ((p1->a.m)==(p2->a.m)))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}

	//return 2;
}
int main()
{
	printf("\nEnter date of S1:");
	scanf("%d-%d-%d",&s1.a.d,&s1.a.m,&s1.a.y);
	printf("\nEnter date of S2:");
	scanf("%d-%d-%d",&s2.a.d,&s2.a.m,&s2.a.y);
	printf("\nS1 date is %d-%d-%d",s1.a.d,s1.a.m,s1.a.y);
	printf("\nS2 date is %d-%d-%d",s2.a.d,s2.a.m,s2.a.y);

	int r= OLDER(&s1,&s2);
	if(r==1)
	{
		printf("\nStudent1 is older");
	}
	else if(r==0)
	{
		printf("\nStudent2 is older");
	}
	else
	{
		printf("\nBoth are same");
	}


}

