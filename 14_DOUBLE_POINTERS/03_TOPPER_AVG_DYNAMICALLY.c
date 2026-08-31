/*Create a two dementional integer array to store the marks of n students in a class
  (Each student takes different number of subjects) so the number rows and columns are dynamic here.
  Read the marks of every student and calculate average marks, and print who is the topper 
  (with highest average marks).release the dynamic memory properly after printing the results.*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("\nEnter number of students: ");
	scanf("%d",&n);
	int **students;
	students=malloc(n*sizeof(int*));

	int i,j,k,topper;
	float avg=0,top_avg=0;
	for(i=0;i<n;i++)
	{

		printf("\nEnter number of subjects for student %d :",(i+1));
		scanf("%d",&j);

		students[i]=(int*)malloc(j*sizeof(int));
		if(students[i]!=NULL)
		{

			for(k=0;k<j;k++)
			{
				printf("\nStudent %d subject %d :",(i+1),(k+1));
				scanf("%d",&students[i][k]);
			}
			printf("\nMarks of student %d: ",(i+1));
			for(k=0;k<j;k++)
			{
				printf("%d ",students[i][k]);
			}

		}
		else
		{
			printf("\nMemoery Allocation failed");
			exit(1);
		}

		avg=0;
		for(k=0;k<j;k++)
		{
			avg+=students[i][k];

		}
		avg/=j;
		if(avg>top_avg)
		{
			top_avg=avg;
			topper=i+1;

		}



	}

	for(i=0;i<n;i++)
	{
		free(students[i]);
	}
	free(students);
	printf("\nTopper is Student %d and his avg is %f",topper,top_avg);

}



/*


students = malloc(n * sizeof(int));
students = malloc(n * sizeof(int *));

These two statements allocate different amounts of memory. Since `students` is declared as `int **students`, it is intended to store addresses (pointers) to the dynamically allocated subject arrays of each student. The statement `malloc(n * sizeof(int))` allocates memory for `n` integers, which is incorrect because `students` does not store integers directly. The correct statement is `malloc(n * sizeof(int *))`, which allocates memory for `n` integer pointers. Each element `students[i]` can then store the address of a separately allocated array containing the marks for one student. Therefore, when allocating memory for an array of pointers, the size must be based on `int *` rather than `int`.

*/
