//WAP to Store reverse of a number into another variable
//and Calculate Summation of digits
#include<stdio.h>
#include<conio.h>
void main()
{
  int no,s=0,r;
  clrscr();
  printf("\nEnter anumber:");
  scanf("%d",&no);
  while(no>0)
  {
	 r=no%10;
	 no=no/10;
	 s=s+r;
	 printf( "%d",r);
  }
  printf("\nReverse no=%d",no1);
  printf("\n Sum of digit:%d",s);
  getch();
}