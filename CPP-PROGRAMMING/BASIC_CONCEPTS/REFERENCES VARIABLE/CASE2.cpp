//WAP to demonstrate non "const" references of  "const" variable
#include<iostream.h>
#include<conio.h>
void main()
  {
  const int x=10;
  int &y=x;
  clrscr();
  cout<<"\n"<<x<<" "<<y;
  //x++;//Error
  cout<<"\n"<<x<<" "<<y;
  y++;
  cout<<"\n"<<x<<" "<<y;
  cout<<"\n"<<(unsigned int)&x<<" "<<(unsigned int)&y;
  getch();
  }
