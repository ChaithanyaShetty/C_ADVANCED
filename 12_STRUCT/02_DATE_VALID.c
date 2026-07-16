/*Create the below structure with nested date data type for date of birth and  date of joining members.
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

int DATE_VALID(struct date s)
{
	if(s.m>=1 && s.m<=12)
	{
		if(s.m==1 || s.m==3 || s.m==5 || s.m==7 || s.m==8 || s.m==10 || s.m==12)
		{
			if(s.d>=1 && s.d<=31)
				return 0;
			else
				return 1;
		}
		else if(s.m==4 || s.m==6 || s.m==9 || s.m==11)
		{
			if(s.d>=1 && s.d<=30)
				return 0;
			else
				return 1;
		}
		else if(s.m==2)
		{
			if((s.y%100!=0&& s.y%4==0)||(s.y%400==0))
			{
				if(s.d>=1 && s.d<=29)
					return 0;
				else
					return 1;

			}
			else
			{
				if (s.d >= 1 && s.d <= 28)
					return 0;
				else
					return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 1;
}
void read_data(struct student *p,int size)
{
	int i;
	struct student *p1=p;

	printf("\nEnter Data: ");
	for(i=0; i<size;)
	{
		printf("\nStudent %d dob: ",(i+1));
		//scanf("%d-%d-%d",&p[i].dob.d,&p[i].dob.m,&p[i].dob.y);
		scanf("%d-%d-%d",&p->dob.d,&p->dob.m,&p->dob.y);
		//int r=DATE_VALID(p[i].dob);
		int r=DATE_VALID(p->dob);

		while(r)
		{
			printf("\nNot valid enter crt dob: ");
			scanf("%d-%d-%d",&p->dob.d,&p->dob.m,&p->dob.y);
			//scanf("%d-%d-%d",&p[i].dob.d,&p[i].dob.m,&p[i].dob.y);
			r= DATE_VALID(p->dob);
			//r = DATE_VALID(p[i].dob);

		}
		//	------------------->

		printf("\nStudent %d doj: ",(i+1));

		scanf("%d-%d-%d",&p->doj.d,&p->doj.m,&p->doj.y);
		r=DATE_VALID(p->doj);
		while(r)
		{
			printf("\nNot valid enter crt doj: ");
			scanf("%d-%d-%d",&p->doj.d,&p->doj.m,&p->doj.y);
			//scanf("%d-%d-%d",&p[i].dob.d,&p[i].dob.m,&p[i].dob.y);
			r= DATE_VALID(p->doj);
			//r = DATE_VALID(p[i].dob);

		}


		//	------------------->
		i++;
		p++;

	}
	printf("\nStudent  Data is: ");
	for(i=0; i<size; i++)
	{
		printf("\nStudent %d dob: ",(i+1));
		printf("%d-%d-%d",p1->dob.d,p1->dob.m,p1->dob.y);
		printf("\nStudent %d doj: ",(i+1));
		printf("%d-%d-%d",p1->doj.d,p1->doj.m,p1->doj.y);

		p1++;
	}

}


int main()
{
	int size;
	printf("\nEnter array size: ");
	scanf("%d",&size);
	struct student s[size];

	read_data(s,size);

}



