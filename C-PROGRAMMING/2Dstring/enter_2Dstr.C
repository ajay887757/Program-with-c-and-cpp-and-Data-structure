//WAP to scan and print DDS
#include<stdio.h>
#include<conio.h>
void main()
{
  char str[10][20];
  int i;
  clrscr();
  printf("\nEnter 10 names:");
  for(i=0;i<10;i++)
	 gets(str[i]);
  printf("\nEntered  names are:");
  for(i=0;i<10;i++)
  {
	 puts(str[i]);
  }
  getch();
}
