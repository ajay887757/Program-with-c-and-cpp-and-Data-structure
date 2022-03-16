//WAP to convert a String in Numeric Value
#include<stdio.h>
#include<conio.h>
void main()
{
  char str[30];
  int i=0,x=0;
  clrscr();
  printf("\nEnter a string:");
  gets(str);
  while(str[i]!='\0')
  {
	 x=x*10+(str[i]-48);
	 i++;
  }
  printf("\n equivalent int=%d",x);
  getch();
}