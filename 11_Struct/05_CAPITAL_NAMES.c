/*//5) Write a function to take an array of structures as argument,
  and convert all their names into capital letters( strupr implementation).
  print the data in main function.
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

//struct student CAPITAL(struct student s[], int size)
void CAPITAL(struct student s[], int size)
{
	int i,j;
	for(i=0; i<size; i++)
	{
		for(j=0; s[i].name[j]!='\0'; j++)
		{
			if(s[i].name[j]>='a' && s[i].name[j]<='z')
			{
				s[i].name[j]=s[i].name[j]-32;
			}
		}
		printf("\n%d CAPITAL NAME IS %s",(i+1),s[i].name);

	}
}

int main()
{
	int size;
	printf("\nEnter how many names to convert: ");
	scanf("%d",&size);
	struct student s[size];
	int i;
	printf("\nEnter Names :");

	for(i=0; i<size; i++)
	{
		printf("\nName %d :",(i+1));
		scanf("%s",s[i].name);

	}
	printf("\nNames are: ");
	for(i=0; i<size; i++)
	{
		printf("\nName %d :",(i+1));
		printf("%s",s[i].name);

	}


	CAPITAL(s,size);
	printf("\nPrinting Capital Names in Main Function:");
	for(i=0;i<size;i++)
	{
		printf("%s ",s[i].name);
	}

}


