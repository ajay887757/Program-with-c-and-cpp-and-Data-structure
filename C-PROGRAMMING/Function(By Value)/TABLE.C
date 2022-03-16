//WAP to print Table of an Integer using Function
#include<stdio.h>
#include<conio.h>
void main()
{
  int no;
  void table(int);
  clrscr();
  printf("\nEnter any no");
  scanf("%d",&no);
  table(no);
  getch();
}
void table(int n)
{
  int i=1;
  while(i<=10)
  {
	 printf("\n %d*%d=%d",n,i,n*i);
	 i++;
  }
}
