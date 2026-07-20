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

  4)Write a function to take the array of structures as argument,
  and print the name of the eldest student , using the date comparison function written above.*/

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

int OLDER(struct date *d1, struct date *d2)
{
	if (d1->y < d2->y)
		return 1;
	else if (d1->y > d2->y)
		return 0;

	if (d1->m < d2->m)
		return 1;
	else if (d1->m > d2->m)
		return 0;

	if (d1->d < d2->d)
		return 1;
	else
		return 0;
}

void OLDEST(struct student *s, int size)
{
	int i;
	int oldest = 0;

	for (i = 1; i < size; i++)
	{
		if (OLDER(&s[i].dob, &s[oldest].dob))
		{
			oldest = i;
		}
	}

	printf("\nELDEST IS %s", s[oldest].name);
}


int main()
{
	int size;
	printf("\nEnter array size: ");
	scanf("%d",&size);
	struct student s[size];

	int i;
	printf("\nEnter data: ");
	for(i=0;i<size;i++)
	{
		printf("\nStudent %d  Name & dob: ",(i+1));
		scanf(" %s %d-%d-%d",s[i].name,&s[i].dob.d,&s[i].dob.m,&s[i].dob.y);
	}

	printf("\nStudent  data is : ");
	for(i=0;i<size;i++)
	{
		printf("\nStudent %d dob: ",(i+1));
		printf("%s %d-%d-%d",s[i].name,s[i].dob.d,s[i].dob.m,s[i].dob.y);
	}

	OLDEST(s,size);


}

