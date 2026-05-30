/*Define a generic function, for different types of array printing ,
  by taking array and array size as arguments.*/

#include<stdio.h>
#define SIZE 5
/*#define PRINT(a,size,dt,i)  for(i=0;i<size;i++)\
  if(dt=='I')\
  {printf("%d ",a[i]);} else if(dt=='F'){printf("%f ",a[i]);}\
  else\
  printf("%c ",a[i]);*/

void PRINT(void *array,int size, char dt)
{
	int i=0;

	if(dt=='I')
	{   int *p=array;
		for(i=0;i<size;i++)
		{
			printf("%d ",p[i]);
		}

	} 
	else if(dt=='F')
	{
		float *p=array;

		for(i=0;i<size;i++)
		{
			printf("%f ",p[i]);
		}

	}
	else
	{
		char *p=array;
		for(i=0;i<size;i++)
		{
			printf("%c ",p[i]);
		}
	}
}

int main()
{
	int a[SIZE]={1,2,3,4,5};
	char c[SIZE]={'a','b','c','d','e'}; //char C;
	float f[SIZE]={1.1,2.2,3.3,4.4,5.5};//float F;
//	int i=0;
	PRINT(a,SIZE,'I');
	PRINT(c,SIZE,'C');
	PRINT(f,SIZE,'F');


}
