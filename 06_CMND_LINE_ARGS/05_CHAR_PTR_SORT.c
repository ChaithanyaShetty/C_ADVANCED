/*5)  Create a character pointer array, initialise the pointers to read only strings.
  Sort the array and print. write a separate sort function.*/

#include<stdio.h>
#include<string.h>
void sort(char **s1,char **s2)
{
	char *temp;
	temp=*s1;
	*s1=*s2;
	*s2=temp;


}
void SORT(char *names[])
{
	int i,j,num=5;
//	char *temp;
	for(i=0;i<num-1;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(strcmp(names[i],names[j])>0)
			{
				sort(&names[i],&names[j]);
				/* temp=names[i];
				   names[i]=names[j];
				   names[j]=temp;*/
			}

		}

	}
	printf("\nSorted names are ");
	for(i=0;i<num;i++)
	{
		printf("%s ",names[i]);
	}
}

int main()
{
	char *s[]={"malathi", "gokul", "aunty", "chaithu", "rahul"};
	SORT(s);

}
/*`strcpy()` cannot be used here because the array contains read-only string literals. `strcpy()` tries to modify string contents, which may cause a segmentation fault. So, instead of copying strings, we swap only the pointers (addresses).*/
