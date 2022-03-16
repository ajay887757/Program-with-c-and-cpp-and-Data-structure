//WAP to Calculate Summation of two integer(Returning Value)
#include<stdio.h>
#include<conio.h>
void main()
{
  int x,y,z,l,m,s;
  clrscr();
  printf("enter the value of x,y,z,l,m");
  scanf("%d%d%d%d%d",&x,&y,&z,&l,&m);
  s=sum(x,y);
  printf("\nSum  =%d",s);
  printf("\nSum  =%d",sum(l,m));
  s=sum(x,y)+sum(z,l)+m;
  printf("\n grand total  =%d",s);
  printf("\n grand total =%d",sum(sum(sum(sum(x,y),l),m),z));
  getch();
}
int sum(int a,int b)
{
  int c;
  c=a+b;
  return c;
}
