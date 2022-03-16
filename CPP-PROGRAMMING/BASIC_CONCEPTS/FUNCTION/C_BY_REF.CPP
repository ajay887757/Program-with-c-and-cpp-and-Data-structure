//WAP to swap two nos using call by references parameter(by alias)
#include<iostream.h>
#include<conio.h>
void main()
  {
  int x,y;
  void swap ( int &,int &);
  clrscr();
  cout<<"\n Enter X and Y ";
  cin>>x>>y;
  swap(x,y);
  cout<<"\n After swapping "<<x<<"  "<<y;
  getch();
  }
void swap(int &a, int &b)
  {
  int c;
  c=a;
  a=b;
  b=c;
  }