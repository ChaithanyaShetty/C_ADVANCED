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
  5) Write a swap function to swap two structure variables.*/


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

void SWAP(struct student *p1,struct student *p2)
{
	struct student temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	printf("\nAfter swap: ");
	printf("\nS1 data is :");
	printf("ID=%d NAME=%s  DOB=%d-%d-%d",p1->ID,p1->name,p1->dob.d,p1->dob.m,p1->dob.y);
	printf("\nS2 data is :");
	printf("ID=%d NAME=%s DOB=%d-%d-%d",p2->ID,p2->name,p2->dob.d,p2->dob.m,p2->dob.y);

}
int main()
{
	printf("\nEnter S1 data:");
	scanf("%d %s %d-%d-%d",&s1.ID,s1.name,&s1.dob.d,&s1.dob.m,&s1.dob.y);
	printf("\nEnter S2 data:");
	scanf("%d %s %d-%d-%d",&s2.ID,s2.name,&s2.dob.d,&s2.dob.m,&s2.dob.y);

	printf("\nS1 data is :");
	printf("ID=%d NAME=%s  DOB=%d-%d-%d",s1.ID,s1.name,s1.dob.d,s1.dob.m,s1.dob.y);
	printf("\nS2 data is :");
	printf("ID=%d NAME=%s DOB=%d-%d-%d",s2.ID,s2.name,s2.dob.d,s2.dob.m,s2.dob.y);

	SWAP(&s1,&s2);


}

