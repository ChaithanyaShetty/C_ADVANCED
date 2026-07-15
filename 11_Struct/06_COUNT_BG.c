/*6) Count and print how many girls and how many boys are there in the class using an array of 
  structures, send girls and boys count as output from function using call by reference

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
	int d,m,y;
	float per;
	char gender;
};

void COUNT(struct student s[],int size, int *M,int *F)
{

	int i,boys_count=0,girls_count=0;
	for(i=0;i<size;i++)
	{
		if(s[i].gender=='m')
		{
			boys_count++;
		}
		else
		{
			if(s[i].gender=='f')
				girls_count++;
		}
	}
	*M=boys_count;
	*F=girls_count;

}

int main()
{
	int size;
	printf("\nEnter array size:");
	scanf("%d",&size);
	struct student s[size];
	printf("\nEnter Data:");
	int i;
	for(i=0;i<size;i++)
	{
		printf("\nStudent %d",(i+1));
		scanf(" %c",&s[i].gender);
	}
	for(i=0;i<size;i++)
	{
		printf("\nStudent %d",(i+1));
		printf(" %c",s[i].gender);
	}

	int boys,girls;
	COUNT(s,size,&boys,&girls);
	printf("\nBoys count is %d and Girls Count is %d",boys,girls);


}


