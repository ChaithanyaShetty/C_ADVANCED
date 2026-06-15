/*4) read a set of numbers from the user, and convert each integer to string using 
  itoa function that you have written already yesterday, and print the numeric string 
  in calling function in the same loop.*/

#include<stdio.h>
#include<stdlib.h>
char *ITOA(int *p)
{   int i,j;
	printf("\nArray element is %d\n",*p);
	int l=*p;int length=0;
	while(l>0)
	{
		l=l/10;
		length++;
	}

	int c;

	char *s=(char *)malloc((length+1)*sizeof(char));
	if(s!=NULL)
	{
		char *s1=s;
		int e=*p;
		i=0;
		if(e==0)
		{
			*s='0';
			s++;
			*s='\0';
			return s1;

		}
		while(e>0)
		{
			c= e%10;
			*s=c+'0';
			//printf("\nS[i]=%c c=%d",*s,c);
			i++;
			e=e/10;
			s++;
		}
		*s='\0';
		char temp;
		//  printf("\nReverse itoa is %s",s1);
		char *s2=s1;
		for(i=0,j=length-1;i<j;i++,j--)
		{
			temp=*s2;
			*s2=*(s-1);
			*(s-1)=temp;
			s2++;
			s--;

		}
		printf("\nITOA is %s",s1);
		return s1;
	}
	else
	{
		printf("\nMemory allocation failed");
		exit(1);
	}


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
	for(i=0;i<size;i++)
	{

		char *s=ITOA(p[i]);
		printf("\nITOA IN MAIN IS %s",s);
		free(s);
		free(p[i]);

	}

}


