//WAP to Search a Name in a List of 10 Names
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char str[10][20];
  char se[20];
  int i;
  clrscr();
  printf("\nEnter 10 names:");
  for(i=0;i<10;i++)
	 gets(str[i]);
  printf("\nEntere searching   names :");
  gets(se);
  for(i=0;i<10;i++)
  {
	  if(strcmp(se,str[i])==0)
	  {
		  printf("\n string is found and position=%d",i+1);
		  getch();
		  return;
	  }
  }
  printf("\n string is not found ");
  getch();
}
