//WAP to demonstrate  "const" references of non "const" variable
#include<iostream.h>
#include<conio.h>
void main()
 {
 int x=12;
 const int &y=x;
 clrscr();
 cout<<"\n"<<x<<" "<<y;
 x++;
 cout<<"\n"<<(unsigned  int)&x<<" "<<(unsigned int)&y;
 getch();
 }
