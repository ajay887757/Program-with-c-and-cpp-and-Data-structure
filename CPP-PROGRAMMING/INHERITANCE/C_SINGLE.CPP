// WAP to demonstrate of constructor in single inheritance
#include<iostream.h>
#include<conio.h>
class base
 {
 public:
 base()
  {
  cout<<"\nB.O.C.";
  }
 ~base()
  {
  cout<<"\nB.O.D.";
  }
 };
class derived:private base //protected base // public base
 {
 public:
 derived()
  {
  cout<<"\nD.O.C.";
  }
 ~derived()
  {
  cout<<"\nD.O.D.";
  }
 };
void main()
 {
 clrscr();
 derived d1;
 }
