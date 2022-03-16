// WAP to demonstrate of constructor in multilevel inheritance
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
class base1
 {
 public:
 base1()
  {
  cout<<"\nB1.O.C.";
  }
 ~base1()
  {
  cout<<"\nB1.O.D.";
  }
 };
class derived : base1,base
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
