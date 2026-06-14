/*5) Implement itoa function and return the string from the function. 
  Print the result in main. itoa function takes an integer as input, 
  and stores the integer in a string.*/


#include<stdio.h>
#include<stdlib.h>
void itoa(int *p,char a[])
{
	int c,i=0,j=0;

	int length=*p;

	int number=*p;

	while(length>0)
	{
		length=length/10;
		j++;
	}
	printf("\nint length is %d",j);
	while(number>0)
	{
		c=number%10;
		//printf("\nc is %d",c);
		a[i]=c+'0';
		printf("\na[i]=%c",a[i]);
		number=number/10;
		i++;
	}
	a[i]='\0';

	printf("\nReverse itoa is:");
	for(i=0;i<j;i++)
	{
		printf("%c",a[i]);
	}
	int k,temp;
	for(i=0,k=j-1;i<k;i++,k--)
	{temp=a[i];
		a[i]=a[k];
		a[k]=temp;

	}
	printf("\nITOA is:\n");
	for(i=0;i<j;i++)
	{
		printf("%c",a[i]);
	}

}
int main()
{
	int *ptr;
	ptr=(int *)malloc(sizeof(int));
	printf("\nenter integer");
	scanf("%d",ptr);
	printf("\nInteger is %d",*ptr);
	char a[10];
	itoa(ptr,a);
	printf("\nITOA IS %s",a);
}

