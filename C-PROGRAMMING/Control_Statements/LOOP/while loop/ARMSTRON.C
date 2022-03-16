//WAP to check Entered number is Armstrong or not
#include<stdio.h>
#include<conio.h>
void main()
{
  int no,s=0,r,no1;
  clrscr();
  printf("\nEnter anumber:");
  scanf("%d",&no);
  no1=no;
  while(no>0)
  {
	 r=no%10;
	 no=no/10;
	 s=s+r*r*r;
  }
  if(s==no1)
	 printf("\n %d is armstrong ",no1);
  else
	 printf("\n %d is not armstrong ",no1);
  getch();
}