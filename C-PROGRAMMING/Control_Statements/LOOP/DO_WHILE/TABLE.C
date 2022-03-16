//WAP to print Multiplication Table
#include<stdio.h>
#include<conio.h>
void main()
{
  int no;
  int i=1;
  clrscr();
  printf("enter any no");
  scanf("%d",&no);
  do
  {
	 printf("\n %d*%d=%d",no,i,no*i);
	 i++;
  }while(i<=10);
  getch();
}


