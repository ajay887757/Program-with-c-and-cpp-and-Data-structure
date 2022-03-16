//WAP to Covert a DDS in Upper Case
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char str[10][20];
  int i,j;
  clrscr();
  printf("\nEnter 10 names:");
  for(i=0;i<10;i++)
	 gets(str[i]);
  for(i=0;i<10;i++)
  {
	 for(j=0;str[i][j]!='\0';j++)
	 {
		if(str[i][j]>=97&&str[i][j]<=122)
		  str[i][j]-=32;
	 }
  }
  printf("\nEntered  names are:");
  for(i=0;i<10;i++)
	 printf("\n %s ",str[i]);
  getch();
}