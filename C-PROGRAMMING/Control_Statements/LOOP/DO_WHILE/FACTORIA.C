//WAP to Calculate Factorial of an Integer
#include<stdio.h>
#include<conio.h>
void main()
{
  int no;
  long int f=1;
  clrscr();
  printf("enter any no");
  scanf("%d",&no);
  do
  {
	 f=f*no--;
  }while(no>0);
  printf("factorial no=%ld",f);
  getch();
}
