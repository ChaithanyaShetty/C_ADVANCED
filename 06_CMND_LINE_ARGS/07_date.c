/*7) read a date in d-m-y format and print it back in given format below:

  eg input :2-3-2000
output: 2nd March, 2000

eg input: 4-1-2001
output: 4th January, 2001*/

#include<stdio.h>
char *date[13]={"zero","jan","feb","mar","apr","may","jun","jul","aug","sep","oct","nov","dec"};
void DOB(int d,int m,int y)
{
	int word=0;
	word= m;
	if((m >=1 && m<=12) &&(d>=1 && d<=31))
	{
		if((d!=1) && (d!=2) && (d!=3) && (d!=21) && (d!=22) && (d!=23) && (d!=31))
		{

			printf("%dth %s, %d",d,date[word],y);
		}
		else if((d==1) || (d==21)||(d==31))
		{
			printf("%dst %s, %d",d,date[word],y);
		}
		else if((d==2) || (d==22))
		{
			printf("%dnd %s, %d",d,date[word],y);
		}
		else
		{
			printf("%drd %s, %d",d,date[word],y);   
		}
	}
}
int main()
{
	int d,m,y;
	printf("\nEnter d,m,y");
	scanf("%d-%d-%d",&d,&m,&y);
	printf("\nDate is %d-%d-%d\n",d,m,y);
	DOB(d,m,y);
}
