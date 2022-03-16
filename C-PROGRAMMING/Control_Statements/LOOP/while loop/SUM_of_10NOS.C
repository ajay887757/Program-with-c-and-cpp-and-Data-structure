//WAP a Program to Calculate Summation of 10 Number using loop
#include<stdio.h>
#include<conio.h>
void main()
{
  int no,s=0;
  int i=0;
  clrscr();
  printf("\nEnter 10 number:");
  while(i<10)
  {
	 scanf("%d",&no);
	 i++;
	 s=s+no;
  }
  printf("\nsum=%d",s);
  getch();
}