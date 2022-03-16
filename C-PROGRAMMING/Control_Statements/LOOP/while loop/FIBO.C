//WAP to print Fibonacci Series
#include<stdio.h>
#include<conio.h>
void main()
{
  int no,s1=0,s2=1,s3;
  int i=0;
  clrscr();
  printf("\nEnter no of step: ");
  scanf("%d",&no);
  while(i<no)
  {
	 s3=s1+s2;
	 printf(" %d",s3);
	 s1=s2;
	 s2=s3;
	 i++;
  }
  getch();
}