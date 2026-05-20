/1) WAP to display the word expansion of a number without using switch/if statement
  eg., Input : 789
Output : Seven Eight Nine*/

#include<stdio.h>
int main()
{
	char a[]="1123";
	int word=0;
	char *number[10]={"zero","one","two","three","four","five","six","seven","eigth","nine"};
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		word=a[i]-'0';
		printf("%s ",number[word]);
	}

}

/*


#include<stdio.h>
int main()
{
int a=1234;int c,digit=0;
char *number[10]={"zero","one","two","three","four","five","six","seven","eigth","nine"};


int rev;
while(a>0)
{
c=a%10;
digit=(digit*10)+c;
a/=10;

}

while(digit>0)
{
c=digit%10;
printf("%s",number[c]);
digit/=10;
}
}*/
