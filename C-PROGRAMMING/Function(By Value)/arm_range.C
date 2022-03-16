//WAP to print all Armstrong numbers
#include<stdio.h>
#include<conio.h>
void main()
{
  int lb=100;
  clrscr();
  for( ;lb<=999;lb++)
  {
	 if(arm(lb))
		printf("\n no is armstrong=%d",lb);
	 else
		printf("no is not armstrong=%d",ub);
  }
  getch();
}
int arm(int n)
{
  int sum=0,r,x;
  x=n;
  while(n>0)
  {
	 r=n%10;
	 sum=sum+(r*r*r);
	 n/=10;
  }
  if(sum==x)
	 return 1;
  else
	 return 0;
}