/*Create a two dimentional array (array of strings) using a double pointer and sort the strings alphabetically. Here number of strings, and each string size, both are decided during runtime.
  -read number of strings (number of rows)



  allocate memory for a character pointer array, for the given number of rows
  visit each row using a row loop.allocate memory for each string dynamically, assign base address to the character pointer array element. Read the string.
  sort the character pointer array (sort the strings). use string comparison function, and swap functions.
  release the dynamic memory properly, after printing the results.*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void SWAP(char **p1,char **p2)
{
	char *temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}
void SORT(int n,char **names)
{
	int i,j;

	for(i=0;i<n-1;i++)
	{
		char **first=names;
		for(j=0;j<n-i-1;j++)
		{
			int r=(strcmp(*first,*(first+1))>0);
			if(r>0)
			{
				SWAP(first,first+1);
			}
			first++;
		}
	}
	printf("\nAfter SORT Names are");
	for(i=0;i<n;i++)
	{
		printf("%s ",names[i]);

	} 

}
int main()
{
	int n;
	printf("\nEnter number of rows: ");
	scanf("%d",&n);
	int i;
	char **names;
	names = malloc(n* sizeof(char *));
	if (names == NULL)
		return 1;
	for(i=0;i<n;i++)
	{
		int j;
		printf("\nEnter size of name %d",(i+1));
		scanf("%d",&j);
		names[i]=(char*)malloc((j+1)*sizeof(char));
		if(names[i]!=NULL)
		{
			printf("\nEnter name %d",(i+1));
			scanf("%s",names[i]);
		}
		else
		{
			printf("\nMemory allocation failed");       
		}



	}

	printf("\nNames are");
	for(i=0;i<n;i++)
	{
		printf("%s ",names[i]);

	}

	SORT(n,names);
	for(i=0;i<n;i++)
	{
		free(names[i]);
	}
	free(names);
}


/*
In this program, memory is allocated **twice** because `char **names` represents a two-level structure. First, we allocate memory for the array of pointers using `malloc(n * sizeof(char *))`. This creates `n` pointer slots (`names[0]`, `names[1]`, etc.), but no actual string storage exists yet. Then, for each pointer, we allocate memory again using `malloc(size + 1)` to store the characters of that particular string. Therefore, there are two allocations: one for the pointer array and one for the actual strings. For the same reason, memory must be freed twice: first free each string with `free(names[i])`, and then free the pointer array itself with `free(names)`.

  Regarding pointers, the type passed to a function must match the type expected by the function parameter. For example, if `p` is an `int`, then `&p` is an `int *`, so it can be passed to a function declared as `fun(int *q)`. If `p` is an `int *`, then `p` itself is already an `int *`, so it can be passed directly to `fun(int *q)`. If `p` is an `int *` and the function expects `int **`, then we pass `&p`, because the address of an `int *` is an `int **`. A simple rule is: **every `&` adds one pointer level (`*`), and every dereference (`*`) removes one pointer level.**   
*/
