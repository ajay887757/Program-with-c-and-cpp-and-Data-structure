//Extern Storage Class
#include<stdio.h>
int call();
int x=10;
void main()
{
  extern int x;
  x=15;
  x=++x+call();
  printf("%d",x);
}
int call()
{
  extern int x;
  x=20;
  x++;
  return 2*x;
}