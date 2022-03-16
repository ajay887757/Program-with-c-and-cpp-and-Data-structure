//WAP to distinctguish local,global and block level var
#include<iostream.h>
#include<conio.h>
int x=5;
void main()
 {
  clrscr();
 int x=12;
 int *p;
 p=&x;
 cout<<"\n Before Block "<<x<<" "<<::x;
  {
  int x=10;
  cout<<"\n Inside the block "<<x<<" "<<::x<<" "<<*p;
  }
 cout<<"\n After the block "<<x<<" "<<::x;
 getch();
 }
