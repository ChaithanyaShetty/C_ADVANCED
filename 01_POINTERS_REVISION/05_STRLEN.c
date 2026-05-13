//strlen using pointers
#include<stdio.h>
void length(char *p)
{
	int i;
	for(i=0;*p!='\0';)
	{
		i++;
		p++;

	}
	printf("length is %d",i);
}
int main()
{
	char s1[]="naga chaithanya";
	//char *p=s1;
	length(s1);
}

/*
#include<stdio.h> 
void length(char s1[]) 
{ int i; 
	for(i=0;s1[i]!='\0';) 
	{ i++; 
	} 
	printf("length is %d",i); 
} 
int main() 
{ char s1[]="naga chaithanya"; 
	length(s1); 
}


*/
