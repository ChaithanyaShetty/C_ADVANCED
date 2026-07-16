//3)  Write a print function to take this array as argument and print the data for all its elements.


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
void PRINT_DATA(struct student *p,int size)
{
	int i;
	printf("\nStudent data is: ");
	for(i=0;i<size;i++)
	{
		printf("\nStudent %d:  ",(i+1));
		printf("ID=%d Name=%s DOB=%d-%d-%d DOJ=%d-%d-%d Gender=%c",p->ID,p->name,p->dob.d,p->dob.m,p->dob.y,
				p->doj.d,p->doj.m,p->doj.y, p->gender);
		p++;
	}
}
int main()
{
	int size;
	printf("\nEnter how many students want:");
	scanf("%d",&size);
	struct student s[size];
	int i;
	printf("\nEnter students data: ");
	for(i=0;i<size;i++)
	{
		printf("\nStudent %d:",(i+1));
		scanf("%d %s %d-%d-%d %d-%d-%d %c",&s[i].ID,s[i].name,&s[i].dob.d,&s[i].dob.m,&s[i].dob.y,
				&s[i].doj.d,&s[i].doj.m,&s[i].doj.y,&s[i].gender);

	}
	PRINT_DATA(s,size);
}


