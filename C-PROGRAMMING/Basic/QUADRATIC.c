//WAP to Calculate roots of a quadratic equation
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int a,b,c;
  float r1,r2,q;
  clrscr();
  printf("\nEnter three number  :");
  scanf("%d%d%d",&a,&b,&c);
  q=b*b-4*a*c;
  r1= (-b+sqrt(q) )/(2*a);
  r2= (-b-sqrt(q) )/(2*a);
  printf("\n Root1= %f    Root2=%f",r1,r2);
  getch();
}