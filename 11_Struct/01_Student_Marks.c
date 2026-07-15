/*Practice scanf and printf on each member of the structure using a structure variable 
  using the below structure template:

  struct student
  {
  int ID;
  char name[50];
  int marks[6];
  int d,m,y;
  float per;
  char gender
  };
  create a structure variable of the above type and read ID , name and marks of 6 subjects, 
  date of birth and date of joining using scanf and printf.*/

#include<stdio.h>
#include<stdlib.h>
struct student
{
	int ID;
	char name[50];
	int marks[6];
	int d,m,y;
	float per;
	char gender;
};

struct student s;
int main()
{
	printf("\nEnter student data:");
	scanf("%d %s %d %d %d %d %d %d %d %d %d %f  %c",&s.ID, s.name, &s.marks[0],&s.marks[1],&s.marks[2],
			&s.marks[3],&s.marks[4],&s.marks[5],&s.d,&s.m,&s.y,&s.per,&s.gender);
	printf("\nstudent data is :");

	printf("ID:%d\n name:%s\n sub1marks:%d\n sub2marks:%d\n sub3marks:%d\n sub4marks:%d\n sub5marks:%d\n sub6marks:%d\n dob:%d-%d-%d per=%f\n Gender=%c\n",s.ID, s.name, s.marks[0],s.marks[1],s.marks[2],
			s.marks[3],s.marks[4],s.marks[5],s.d,s.m,s.y,s.per,s.gender);

}




