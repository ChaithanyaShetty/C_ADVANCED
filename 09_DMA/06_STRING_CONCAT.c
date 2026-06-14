/*6) Write a function, that takes two strings as input and concatenates only the first
  n characters from first string and first m characters from second string and makes a new string.
  eg., input str1 = "kernel masters", str2 = "raayan systems", n = 3, m = 5
output : kerraaya*/

#include<stdio.h>
#include<stdlib.h>
void CONCAT(char *str1,char *str2)
{
	int n,m,i,j;

	printf("\nEnter n and m values");
	scanf("%d%d",&n,&m);
	char *str3;
	str3=(char *) malloc((n+m+1)*sizeof(char));
	for(i=0;i<n;i++)
	{
		str3[i]=str1[i];
	}
	for(j=0;j<m;j++)
	{
		str3[i+j]=str2[j];
	}
	str3[n+m]='\0';

	printf("\nConcatenated string is %s",str3);
}
int main()
{
	char *str1,*str2;
	str1=(char *)malloc(20*sizeof(char));
	str2=(char *)malloc(20*sizeof(char));

	printf("\nEnter string 1:");
	fgets(str1,20,stdin);

	printf("\nEnter string 2:");
	fgets(str2,20,stdin);
	printf("\nStrings are \nstr1=%s \nstr2=%s",str1,str2);
	CONCAT(str1,str2);

}
