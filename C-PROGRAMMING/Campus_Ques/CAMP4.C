//Program to Pass Array in Function by Another Method
#include<stdio.h>
void main()
{
  int x[5]={12,45,90,1,76};
  void call(int y[5]);
  call(x);
  printf("\n%d %d",x[2],x[3]);
}
void call(int y[5])
{
  y++;
  y[2]=100;
}