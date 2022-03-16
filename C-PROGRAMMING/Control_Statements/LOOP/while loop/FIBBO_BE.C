//WAP to Print Fibonacci Series b/w given Range
#include<stdio.h>
#include<conio.h>
void main()
{
  int lb,ub,s1=0,s2=1,s3;
  clrscr();
  printf("enter lb and ub");
  scanf("%d%d",&lb,&ub);
  while(s3>ub)
  {
	 s3=s1+s2;
	 if(s3>=lb&&s3<=ub)
		printf("  %d",s3);
	 s1=s2;
	 s2=s3;
  }
  getch();
}