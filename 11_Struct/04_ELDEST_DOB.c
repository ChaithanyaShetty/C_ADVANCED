/*4) write a function to take the array of structures as an argument and return the structure element with oldest date of birth.
  return the structure variable using return statement and array element with index. Return type of the function will be struct student. When you return a structure ,its copy will be returned from function, we can assign it to another structure variable at function call.

  eg.,struct student oldeststudent(struct student arr[])
  { 

  return arr[i]; // find the index at which date of  birth is oldest using date comparison function
  }*/


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

struct student oldeststudent(struct student arr[],int size)
{
	int D=arr[0].d,M=arr[0].m,Y=arr[0].y;
	int i,oldest=0;
	for(i=0;i<size;i++)
	{
		if(((arr[i].y)<Y) )
		{
			Y=arr[i].y;
			M=arr[i].m;
			D=arr[i].d;
			oldest=i;
		}
		else if((arr[i].y == Y) && (arr[i].m < M))
		{
			Y=arr[i].y;
			M=arr[i].m;
			D=arr[i].d;
			oldest=i;
		}
		else
		{
			if((arr[i].y == Y) && (arr[i].m == M) && (arr[i].d < D))
			{
				Y=arr[i].y;
				M=arr[i].m;
				D=arr[i].d;
				oldest=i;
			}
		}

	}
	printf("\nEldest Dob is %d-%d-%d",D,M,Y);
	return arr[oldest];

}

int main()
{
	int size;
	int i;
	printf("Enter array size to compare  dobs: ");
	scanf("%d",&size);
	struct student s[size];
	printf("\nEnter student data: ");
	for(i=0;i<size;i++)
	{
		printf("\nStudent %d",(i+1));
		scanf("%d %s %d-%d-%d",&s[i].ID,s[i].name,&s[i].d,&s[i].m,&s[i].y);
	}
	for(i=0;i<size;i++)
	{
		printf("\nStudent %d :",(i+1));
		printf("ID= %d Name=%s DOB=%d-%d-%d\n",s[i].ID,s[i].name,s[i].d,s[i].m,s[i].y);
	}

	struct student oldest;

	oldest = oldeststudent(s, size);
	printf("\nEldest Id=%d  Eldest D0B=%d-%d-%d",oldest.ID,oldest.d,oldest.m,oldest.y);


}
