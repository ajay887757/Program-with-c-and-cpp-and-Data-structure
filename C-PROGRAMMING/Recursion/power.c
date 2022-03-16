//WAP to Calculate a to the power b using Recorsion
#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  int power(int,int);
  clrscr();
  printf("\n Enter Base and Exponent :");
  scanf("%d%d",&a,&b);
  printf("\n%d to the power %d  = %d",a,b,power(a,b));
  getch();
}
int power(int n,int m)
{
  int p=1;
  if(m==1)
	 return n;
  else
  {
	 p=n*power(n,m-1);
	 return p ;
  }
}
