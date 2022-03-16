//WAP to Reverse a number into another variable
#include<stdio.h>
#include<conio.h>
void main()
{
  int no,no1=0,r;
  clrscr();
  printf("\nEnter any number:");
  scanf("%d",&no);
  if(no<0)
  {
	 printf("\nren no=");
	 printf("-");
	 no=no*-1;
  }
  else
	 printf("\n rev no=");
  while(no>0)
  {
	 r=no%10;
	 no1=no1*10+r;
	 no=no/10;
  }
  printf("%d",no1);
  getch();
}