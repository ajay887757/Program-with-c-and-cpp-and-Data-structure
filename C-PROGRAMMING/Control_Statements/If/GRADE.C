//WAP to print Grade of a Student
#include<stdio.h>
#include<conio.h>
void main()
{
	int m;
	clrscr();
	printf("\nEnter marks:");
	scanf("%d",&m);
	if(m>=90)
	  printf(" \n  grade  A ");
	else if(m>=80&&m<=89)
	  printf(" \n grade B");
	else  if(m>=70&&m<=79)
	  printf(" \n grade C ");
	else if(m>=60&&m<=69)
	  printf(" \n grade D ");
	else
	  printf(" \n  FAIL ");
	getch();
}