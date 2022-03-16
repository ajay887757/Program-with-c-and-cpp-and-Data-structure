//WAP to demonstrate  "const" references of  "const" variable
#include<iostream.h>
#include<conio.h>
void main()
  {
  const int x=12;
  const int &y=x;
  clrscr();
  cout<<"\in"<<x<<" "<<y;
  //x++;//Error
  cout<<"\n"<<x<<" "<<y;
  //y++;//Error
  cout<<"\n"<<x<<" "<<y;
  cout<<"\n"<<(unsigned int)&x<<" "<<(unsigned int)&y;
  getch();
  }
