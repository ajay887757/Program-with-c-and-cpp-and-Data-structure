//WAP to print all Armstrong numbers
#include<stdio.h>
#include<conio.h>
void main()
{
  int lb=100,sum,r,no1;
  clrscr();
  while(lb<=999)
  {
	 no1=lb;
	 sum=0;
	 while(no1>0)
	 {
		r=no1%10;
		sum=sum+(r*r*r);
		no1=no1/10;
	 }
	 if(sum==lb)
		printf("\n no is armstrong=%d",lb);
	 lb++;
  }
  getch();
}