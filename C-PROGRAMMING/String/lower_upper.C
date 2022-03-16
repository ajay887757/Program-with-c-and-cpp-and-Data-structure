//WAP to convert String in Upper Case
#include<stdio.h>
#include<conio.h>
void main()
{
  char str[30];
  int i=0;
  clrscr();
  printf("\nEnter youre name:");
  gets(str);
  while(str[i])
  {
	 if(str[i]>=97&&str[i]<=122)
		str[i]-=32;
	 i++;
  }
  printf("\nlower string %s",str);
  getch();
}
