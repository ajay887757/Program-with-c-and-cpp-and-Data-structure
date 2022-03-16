//WAP to convert any upper case character into lower case character.
#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;   //decleration of variable
  clrscr();    //for clear the screen
  printf("enter any character");
  scanf("%c",&ch);
  if(ch>=65&&ch<=90)
	 ch=ch+32;
  printf("\n lower case character=%c",ch);
  getch();
}
