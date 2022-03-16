//WAP to Calculate Summation of Array using Function
#include<stdio.h>
#include<conio.h>
void main()
{
  int x[10],i,s=0;
  int sum(int,int);
  clrscr();
  for(i=0;i<10;i++)
	 scanf("%d",&x[i]);
  for(i=0;i<10;i++)
	 s=sum(s,x[i]);
  printf("sum of array=%d",s);
  getch();
}
int sum(int a,int b)
{
  int s;
  s=a+b;
  return s;
}
