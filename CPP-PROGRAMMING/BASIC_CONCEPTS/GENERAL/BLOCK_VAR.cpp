//WAP to demonstrate of block level variable
#include<iostream.h>
#include<conio.h>
void main()
 {
 clrscr();
 int x=12;//local var
 cout<<"\n"<<x;
  {
  int y=10;//block level
  cout<<"\n"<<x<<" "<<y;
  }
 //cout<<"\n"<<x<<" "<<y; // block level var "y" is not accessable from outside the block
 getch();
 }
