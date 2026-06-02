//itoa

#include<stdio.h>
char *ITOA(int *p)
{
	int i=0,j,c,k; char temp;
	printf("\nb value is %d",*p);
	static char a[10];
	int *b=p;
	while(*b>0)
	{
		c=*b%10;
		printf("\nc is %d",c);
		a[i]=c+'0';
		*b = *b / 10;
		i++;
	}
	printf("\nReverse atoi is :");
	for(j=0;j<i;j++)
	{
		printf("%c",a[j]);
	}
	printf("\natoi is :");
	for(j=0,k=i-1;j<k;j++,k--)
	{
		temp=a[j];
		a[j]=a[k];
		a[k]=temp;
	}
	a[i]='\0';
	for(j=0;j<i;j++)
	{
		printf("%c",a[j]);
	}
	return a;

}
int main()
{
	int a=1234;
	char *str= ITOA(&a);
	printf("\n%s",str);


}
