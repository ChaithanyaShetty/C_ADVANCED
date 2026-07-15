/*Create an array of structures using above template. read the data for all elements of the array.
  and print the topper name with highest percentage.

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
struct student
{
	int ID;
	char name[50];
	int marks[6];
	int d,m,y;
	float per;
	char gender;
};

struct student s[5];
int main()
{
	int i;
	printf("\nEnter students data and exclude per it will calculate later part of code: ");
	for(i=0; i<5; i++)
	{
		printf("\nStudent %d:",(i+1));
		scanf("%d %s %d %d %d %d %d %d %d-%d-%d  %c",&s[i].ID,s[i].name,
				&s[i].marks[0],&s[i].marks[1],&s[i].marks[2],&s[i].marks[3],&s[i].marks[4],&s[i].marks[5],
				&s[i].d,&s[i].m,&s[i].y,&s[i].gender);

	}
	for(i=0; i<5; i++)
	{
		printf("\nStudent %d:",(i+1));
		s[i].per = (s[i].marks[0] + s[i].marks[1] + s[i].marks[2] + s[i].marks[3] + s[i].marks[4] + s[i].marks[5]) / 6.0;
		printf("Emp Id=%d\n Name=%s\n 6 Sub Marks:%d %d %d %d %d %d\n dob:%d-%d-%d\n per=%f\n Gender=%c",s[i].ID,s[i].name,
				s[i].marks[0],s[i].marks[1],s[i].marks[2],s[i].marks[3],s[i].marks[4],s[i].marks[5],
				s[i].d,s[i].m,s[i].y,s[i].per,s[i].gender);



	}
	int topper = 0;

	for(i = 1; i < 5; i++)
	{
		if(s[i].per > s[topper].per)
		{
			topper = i;
		}
	}

	printf("\nTopper Name = %s", s[topper].name);
	printf("\nTopper Percentage = %.2f", s[topper].per);
}



