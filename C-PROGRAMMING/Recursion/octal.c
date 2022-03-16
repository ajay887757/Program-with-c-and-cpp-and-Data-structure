//WAP to print Octal of a Number using Recorsion
#include<stdio.h>
#include<conio.h>
void main()
{
  int no ;
  void octal(int);
  clrscr();
  printf("\n Enter No :");
  scanf("%d",&no);
  octal(no);
  getch();
}
void octal(int n)
{
  if(n==0)
	 return;
  else
  {
	 octal(n/8);
	 printf("%d",n%8);
  }
}