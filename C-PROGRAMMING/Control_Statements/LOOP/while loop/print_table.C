#include<stdio.h>
#include<conio.h>
void main()
{
  int i=1,no;
  clrscr();
  printf("\nEnter a number:");
  scanf("%d",&no);
  while(i<=10)
  {
	 printf("\n %d x %d = %d",no,i,no*i);
	 i++;
  }
  getch();
}