//WAP to convert any digit character into equivelent integer.
#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;  //decleration of variable
  int x;   //decleration of variable
  clrscr();    //for clear the screen
  printf("enter any  digit character");
  scanf("%c",&ch);
  if(ch>=48&&ch<=57)
  {
	 x=ch-48;
	 printf("\n inter value=%d",x);
  }
  else
	 printf("\ncharacter=%c",ch);
  getch();
}