//WAP to create dynamic single int ( without initilization )
#include<iostream.h>
#include<conio.h>
void main()
  {
  int *p;
  p=new int;
  clrscr();
  cout<<"\n Enter the no.";
  cin>>*p;
  cout<<"\n"<<*p;
  delete p;
  getch();
  }
