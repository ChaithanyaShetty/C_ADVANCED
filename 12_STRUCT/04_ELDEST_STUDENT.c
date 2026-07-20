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
void OLDEST(struct student *s,int size)
{

	int i;
	int D=s->dob.d,M=s->dob.m,Y=s->dob.y;
	int oldest=0;
	struct student *OLDEST=s;
	for(i=0;i<size;i++)
	{
		if(s->dob.y < Y)
		{
			D=s->dob.d;
			M=s->dob.m;
			Y=s->dob.y;
			oldest=i;
		}
		else if(s->dob.m < M  && (s->dob.y == Y))
		{
			D=s->dob.d;
			M=s->dob.m;
			Y=s->dob.y;
			oldest=i;
		}
		else
		{
			if((s->dob.d < D) && (s->dob.y == Y) && (s->dob.m == M))
			{
				D=s->dob.d;
				M=s->dob.m;
				Y=s->dob.y;
				oldest=i;
			}
		}
		s++;


	}
	printf("\nELDEST IS %s",OLDEST[oldest].name);
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



