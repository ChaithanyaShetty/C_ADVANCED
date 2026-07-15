/*3) Write a function to compare 2 structures and return 1 if they are equal, 
  and 0 if they are not equal.


  struct student
  {
  int ID;
  char name[50];
  int marks[6];
  int d,m,y;
  float per;
  char gender
  }; */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	int ID;
	char name[50];
	int marks[6];
	int d,m,y;
	float per;
	char gender;
};

int COMPARE(struct student a, struct student b)
{
	if((a.ID==b.ID) &&((a.marks[0])==b.marks[0])&& ((a.marks[1])==b.marks[1]) &&
			((a.marks[2])==b.marks[2]) && ((a.marks[3])==b.marks[3]) && ((a.marks[4])==b.marks[4]) &&
			((a.marks[5])==b.marks[5]) && (a.d==b.d) && (a.m==b.m) && (a.y==b.y) && 
			(a.per==b.per) && (a.gender==b.gender))
	{
		if(strcmp(a.name ,b.name)==0)
		{
			return 1;
		}
		else
		{
			return 0;
		}

	}
	else
	{
		return 0;
	}

}

struct student s[2];
int main()
{
	int i;
	printf("\nEnter students data: ");
	for(i=0; i<2; i++)
	{
		printf("\nStudent %d:",(i+1));
		scanf("%d %s %d %d %d %d %d %d %d-%d-%d  %c",&s[i].ID,s[i].name,
				&s[i].marks[0],&s[i].marks[1],&s[i].marks[2],&s[i].marks[3],&s[i].marks[4],&s[i].marks[5],
				&s[i].d,&s[i].m,&s[i].y,&s[i].gender);

	}
	for(i=0; i<2; i++)
	{
		printf("\nStudent %d:",(i+1));
		s[i].per = (s[i].marks[0] + s[i].marks[1] + s[i].marks[2] + s[i].marks[3] + s[i].marks[4] + s[i].marks[5]) / 6.0;
		printf("Emp Id=%d\n Name=%s\n 6 Sub Marks:%d %d %d %d %d %d\n dob:%d-%d-%d\n per=%f\n Gender=%c",s[i].ID,s[i].name,
				s[i].marks[0],s[i].marks[1],s[i].marks[2],s[i].marks[3],s[i].marks[4],s[i].marks[5],
				s[i].d,s[i].m,s[i].y,s[i].per,s[i].gender);
	}

	int r=COMPARE(s[0],s[1]);
	if(r==1)
	{
		printf("\nBoth structures are same");
	}
	else
	{
		printf("\nBoth structures are  not same");

	}
}



