#include<stdio.h>
#include<conio.h>
void main()
{
  int a=10;
  char b='R';
  float c=35.67;
  double d=12.15;
  clrscr();
  printf("\n%d %d %d %d",sizeof(int),sizeof(char),sizeof(float),sizeof(double));
  printf("\n%d %d %d %d",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
  printf("\n%d %d %d %d",sizeof(10),sizeof('R'),sizeof(35.67),sizeof(12.15));
  printf("\n%d %d",sizeof(a+b+c),sizeof(sizeof(d)));
  printf("\n%d %d",sizeof(d+sizeof(d)),sizeof(a)*sizeof(72.95));
  getch();
}