//WAP to Print all Palindrome numbers b/w given Range using Function
#include<stdio.h>
#include<conio.h>
void main()
{
  int lb,ub;
  int palin(int);
  clrscr();
  printf("\nEnter lb and ub");
  scanf("%d%d",&lb,&ub);
  for( ;lb<=ub;lb++)
  {
	 if(palin(lb))
		printf("%d\t",lb);
  }
  getch();
}
int palin(int n)
{
  int no1=0,r,x;
  x=n;
  while(n>0)
  {
	 r=n%10;
	 no1=no1*10+r;
	 n/=10;
  }
  if(no1==x)
	 return 1;
  else
	 return 0;
}