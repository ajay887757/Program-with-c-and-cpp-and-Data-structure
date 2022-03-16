//WAP to scan and print a String
#include<stdio.h>
#include<conio.h>
void main()
{
  char str[10];
  clrscr();
  printf("\nEnter your name:");
	 gets(str);
  printf("Entered Name is:");
	 puts(str);
  getch();
}