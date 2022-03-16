//WAP to Print all Prime numbers b/w given Range
#include<stdio.h>
#include<conio.h>
void main()
{
  int lb,ub;
  clrscr();
  printf("\nEnter lb and ub:");
  scanf("%d%d",&lb,&ub);
  while(lb<=ub)
  {
	 if(prime(lb))
		printf("%d\t",no);
	 lb++;
  }
  getch();
}

prime(int n)
{
  int i=2;
  while(i<n)
  {
	 if(n%i==0)
		return 0;
	 i++;
  }
  return 1;
}
