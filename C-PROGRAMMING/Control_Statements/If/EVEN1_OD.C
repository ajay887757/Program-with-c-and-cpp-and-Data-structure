//WAP to check no is even or odd.
#include<stdio.h>
#include<conio.h>
void main()
{
  int no;   //decleration of variable
  clrscr();    //for clear the screen
  printf("enter any no");
  scanf("%d",&no);
  if(no%2)
	 printf("\n no is odd");
  else
	 printf("\n no is even");
  getch();
}
