//WAP to print a Number in reverse order using Recorsion
#include<stdio.h>
#include<conio.h>
void main()
{
  int no ;
  void rev(int);
  clrscr();
  printf("\n Enter No :");
  scanf("%d",&no);
  rev(no);
  getch();
}
void rev(int n)
{
  if(n==0)
	 return;
  else
  {
	 printf("%d",n%10);
	 rev(n/10);
  }
}