//WAP to convert any lower case character into upper case character.
#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;   //decleration of variable
  clrscr();    //for clear the screen
  printf("enter any character");
  scanf("%c",&ch);
  if(ch>=97&&ch<=122)
    ch=ch-32;
  printf("\n upper case character=%c",ch);
  getch();
}