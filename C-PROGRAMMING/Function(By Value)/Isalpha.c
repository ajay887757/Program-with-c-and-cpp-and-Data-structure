//WAP to check Entered Character is Alphabate or not
#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  int isalphabate(char);
  clrscr();
  printf("\n Enter a character:");
	 ch=getch();
  if(isalphabate(ch))
	 printf("\n '%c'  is  alphabat",ch);
  else
	 printf("\n '%c'  is not  a alphabat",ch);
  getch();
}
int isalphabate(char ch)
{
  if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
	 return 1;
  return 0;
}