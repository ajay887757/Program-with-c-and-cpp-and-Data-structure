//WAP to find biggest number among two number using Conditional Operator
#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,big;
  clrscr();
  printf("\nEnter two no:");
  scanf("%d%d",&a,&b);
  big = a>b ? a : b;
  printf("\n  %d      %d     %d",big , a , b);
  getch();
}