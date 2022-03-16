//Bitwise Operators
#include<stdio.h>
#include<conio.h>
void main()
{
  int x=53,y=15,z;
  z=x&y;
  printf("\n%d",z);
  z=x|y;
  printf("\n%d",z);
  z=x^y;
  printf("\n%d",z);
  z=x>>2;
  printf("\n%d",z);
  z=x<<2;
  printf("\n%d",z);
}