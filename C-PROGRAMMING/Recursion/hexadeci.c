//WAP to print Hexa Decimal of a Number using Recorsion
#include<stdio.h>
#include<conio.h>
void main()
{
  int no;
  void hexa(int);
  clrscr();
  printf("\n Enter No :");
  scanf("%d",&no);
  hexa(no);
  getch();
}
void hexa(int n)
{
  int x;
  if(n==0)
	 return;
  else
  {
	 hexa(n/16);
	 x=n%16;
	 if(x>10)
		printf("%c",x+55);
	 else
		printf("%d",x);
  }
}