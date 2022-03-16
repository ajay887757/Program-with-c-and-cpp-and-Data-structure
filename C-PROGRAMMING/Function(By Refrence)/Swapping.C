//WAP to swap two integers using function
#include<stdio.h>
#include<conio.h>
void main()
{
  int x,y;
  void swap(int *,int *);
  clrscr();
  printf("enter the value of x and y");
  scanf("%d%d",&x,&y);
  printf("\n before the swapping a=%d,b=%d",x,y);
  swap(&x,&y);
  printf("\n after the swapping a=%d,b=%d",x,y);
  getch();
}
void swap(int *a,int *b)
{
  int c;
  c=*a;
  *a=*b;
  *b=c;
}