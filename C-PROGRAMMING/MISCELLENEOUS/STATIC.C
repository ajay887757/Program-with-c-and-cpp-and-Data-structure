//Static Storage Class
#include<stdio.h>
int call()
{
  static int x=0;
  x++;
  return x;
}
void main()
{
  int i;
  for(i=0;i<=5;i++)
    printf(" %d",call());
}
