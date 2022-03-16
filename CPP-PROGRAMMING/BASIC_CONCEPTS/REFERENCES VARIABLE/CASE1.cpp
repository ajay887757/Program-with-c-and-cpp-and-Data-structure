//WAP to demonstrate non "const" references of non "const" variable
# include<iostream.h>
#include<conio.h>
void main()
  {
  int x=12;
  int &y=x;       //Reference of x
  clrscr();
  cout<<"\n"<<x<<" "<<y;
  x++;
  cout<<"\n"<<x<<" "<<y;
  y++;
  cout<<"\n"<<x<<" "<<y;
  cout<<"\n"<<(unsigned int)&x<<" "<< (unsigned int)&y;
  getch();
  }
