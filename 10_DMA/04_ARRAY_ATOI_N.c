/*4) read a set of numbers from the user, and convert each integer to string using 
  itoa function that you have written already yesterday, and print the numeric string 
  in calling function in the same loop.*/

#include<stdio.h>
#include<stdlib.h>
void ITOA(int *p,int size)
{   int i,j;
	printf("\nArray element is %d\n",*p);
	int l=*p;int length=0;
	while(l>0)
	{
		l=l/10;
		length++;
	}

	int c;


	char s[length+1];

	int e=*p;
	i=0;
	while(e>0)
	{
		c= e%10;
		s[i]=c+'0';
		printf("\nS[i]=%c c=%d",*s,c);
		i++;
		e=e/10;

	}
	s[i]='\0';
	char temp;

	printf("\nReverse itoa is %s",s);
	for(i=0,j=length-1;i<j;i++,j--)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
		printf("\ns[i]=%c and s[j]=%c",s[i],s[j]);
	}
	printf("\nITOA is %s",s);

}
int main()
{
	int size;
	printf("\nEnter array size:");
	scanf("%d",&size);
	int *p[size];
	int i;
	printf("\nEnter array elements:\n");
	for(i=0;i<size;i++)
	{
		p[i]=(int*)malloc(sizeof(int));
		if(p[i]!=NULL)
		{
			scanf("%d",p[i]);

		}
		else
		{
			printf("\nMemory allocation faile");
			exit(1);
		}

	}
	printf("\nArray elements are:");
	for(i=0;i<size;i++)
	{
		printf("%d ",*p[i]);

	}
	/* for(i=0;i<size;i++)
	   {
	   ITOA(p[i],size);

	   }*/
	i=0; 
	ITOA(p[i],size);
}


