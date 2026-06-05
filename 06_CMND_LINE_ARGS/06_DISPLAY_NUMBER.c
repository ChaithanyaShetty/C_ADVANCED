/*6)  read an integer number, display the number as a number name expansion.
  eg., 458 : four five eight*/

#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{

	char *numer[]={"zero","one","two","three","four","five","six","seven","eight","nine","ten"};
	int size=argc-1;
	int a[size];

	int b=atoi(argv[1]);
	printf("\nb is %d",b);

	int i=0,k;
	while(b>0)
	{

		a[i]=b%10;
		printf("\na[i]=%d",a[i]);
		b=b/10;
		i++;

	}
	printf("\nArray elements are");
	int j;
	for(j=0;j<i;j++)
	{
		printf("%d ",a[j]);
	}
	printf("\ni value is %d\n",i);
	for(k=i-1;k>=0;k--)
	{
		int c=a[k];
		printf("%s ",numer[c]);
	}
}

