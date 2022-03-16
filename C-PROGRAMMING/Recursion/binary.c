//WAP to print binary of a Number using Recorsion
#include<stdio.h>
#include<conio.h>
void main()
{
  int no ;
  void bin(int);
  clrscr();
  printf("\n Enter No :");
  scanf("%d",&no);
  bin(no);
  getch();
}
void bin(int n)
{
  if(n==0)
	 return;
  else
  {
	 bin(n/2);
	 printf("%d",n%2);
  }
}