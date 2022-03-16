//WAP to Calculate Factorial of an Integer using Function
#include<stdio.h>
#include<conio.h>
long int fact(int n)
{
  long int f=1;
  while(n>1)
	 f=f*n--;
  return f;
}
void main()
{
  int no;
  clrscr();
  printf("enter any no");
  scanf("%d",&no);
  printf("\nFactorial = %ld",fact(no));
  getch();
}
