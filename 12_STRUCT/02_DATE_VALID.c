/*/*Create the below structure with nested date data type for date of birth and  date of joining members. 
  struct student 
  { 
  int ID; 
  char name[50]; 
  int marks[6]; 
  struct date dob, doj; 
  float per; 
  char gender 
  }; 
  2) Create an array of structures for student, and write a function to take this array as 
  argument and read data for all its elements. Verify if the given date of birth and date of 
  joining are valid using a separate date validation function that takes the date as argument. 
  if the date is not valid ask for another date.*/ 

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
int DATE_VALID(struct date *p1)
{
	if(p1->m>=1 && p1->m<=12)
	{
		if((p1->m ==1) ||  (p1->m ==3) || (p1->m ==5) || (p1->m ==7) || (p1->m ==8) ||  (p1->m ==10) || (p1->m ==12))
		{
			if((p1->d >=1 && p1->d<=31))
				return 1;
			else
				return 0;
		}
		else if((p1->m ==4) ||  (p1->m ==6) || (p1->m ==9) || (p1->m ==11))
		{
			if((p1->d >=1 && p1->d<=30))
				return 1;
			else
				return 0;

		}
		else 
		{

			if(((p1->y % 4==0) && (p1->y% 100!=0)) || (p1->y %400==0))
			{
				if((p1->d>=1 && p1->d<=29))
					return 1;
				else
					return 0;

			}
			else
			{
				if(p1->d >=1 && p1->d <=28)
					return 1;
				else
					return 0;


			}

		}

	}
	else
	{
		return 0;
	}
}
int main()
{
	int size;
	printf("\nenter size of array: ");
	scanf("%d",&size);
	struct student s[size];
	int i;
	for(i=0;i<size;i++)
	{
		printf("\nEnter student %d dob: ",(i+1));
		scanf("%d-%d-%d",&s[i].dob.d,&s[i].dob.m,&s[i].dob.y);
		int r=DATE_VALID(&s[i].dob);
		if(r==0)
		{
			printf("\nPlease enter valid DOB:");
			i--;
			continue;
		}
	}
	for(i=0;i<size;i++)
	{
		printf("\nEnter student %d doj: ",(i+1));
		scanf("%d-%d-%d",&s[i].doj.d,&s[i].doj.m,&s[i].doj.y);
		int r=DATE_VALID(&s[i].doj);
		if(r==0)
		{
			printf("\nPlease enter valid DOJ:");
			i--;
			continue;
		}
	}


	for(i=0;i<size;i++)
	{
		printf("\nStudent %d : ",(i+1));
		printf("DOB: %d-%d-%d DOJ: %d-%d-%d",s[i].dob.d,s[i].dob.m,s[i].dob.y,s[i].doj.d,s[i].doj.m,s[i].doj.y);

	}
}

