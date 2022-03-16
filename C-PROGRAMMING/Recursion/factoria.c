//WAP to Calculate Factorial of a Number using Recorsion
#include<stdio.h>
#include<conio.h>
void main()
{
  int no ;
  long int fact( int );
  clrscr();
  printf("\n Enter No :");
  scanf("%d", &no);
  printf("\n Factorial  = %ld", fact(no) );
  getch();
}
long int fact(int n)
{
  long int f=1 ;
  if(n==0)
	 return 1;
  else
  {
	 f=n*fact(n-1);
	 return f ;
  }
}
