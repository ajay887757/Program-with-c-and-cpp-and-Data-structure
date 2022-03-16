//WAP to print ASCII value of a character
#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  clrscr();
  printf("Enter a char ");
  scanf("%c",&ch);
  printf("\nASCII value of %c=%d",ch,ch);
  getch();
}