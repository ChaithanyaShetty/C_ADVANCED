/*Write a C program to implement a nested union inside a structure and access its members 
  using the structure variable*/

#include<stdio.h>
#include<stdlib.h>

struct IDTYPE
{
	int idtype;
	union IDPROOF
	{
		char AADHAR[20];
		int VOTERID;
	}unions;
}structures;

int main()
{
	printf("\nEnter SERIES ID: ");
	scanf("%d",&structures.idtype);
	printf("\nEnter AADHAR ID: ");
	scanf("%s",structures.unions.AADHAR);
	printf("\nEnter VOTER ID: ");
	scanf("%d",&structures.unions.VOTERID);

	printf("\nID= %d",structures.idtype);
	printf("\nAADHAR=%s",structures.unions.AADHAR);
	printf("\nVOTER=%d",structures.unions.VOTERID);




}
