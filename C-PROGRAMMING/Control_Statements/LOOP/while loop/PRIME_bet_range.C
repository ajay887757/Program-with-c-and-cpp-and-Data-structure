//WAP to print all prime numbers b/w given range
#include<stdio.h>
#include<conio.h>
void main()
{
  int lb,ub,i;
  clrscr();
  printf("\nEnter any range:");
  scanf("%d%d",&lb,&ub);
  while(lb<=ub)
  {
	 i=2;
	 while(i<lb)
	 {
		if(lb%i==0)
		{
		  break;
		}
		i++;
	 }
	 if(i==lb)
		printf("%d\t",lb);
	 lb++;
  }
  getch();
}