//WAP to demonstrate of constructor/destructor in virtual inheritance
#include<iostream.h>
#include<conio.h>
class base
 {
 public:
 base()
  {
  cout<<"\n B.O.C.";
  }
 ~base()
  {
  cout<<"\n B.O.D.";
  }
 };
class base1
 {
 public:
 base1()
  {
  cout<<"\n B1.O.C.";
  }
 ~base1()
  {
  cout<<"\n B1.O.D.";
  }
 };
class derived : base1,virtual base
 {
 public:
  derived()
  {
  cout<<"\n D.O.C.";
  }
 ~derived()
  {
  cout<<"\n D.O.D.";
  }
 };
void main()
 {
 clrscr();
 derived d1;
 }

