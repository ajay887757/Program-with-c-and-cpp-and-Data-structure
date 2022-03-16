// WAP to demonstrate of constructor in hirerchical inheritance
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
class derived1:private base //protected base // public base
 {
 public:
 derived1()
  {
  cout<<"\nD1.O.C.";
  }
 ~derived1()
  {
  cout<<"\nD1.O.D.";
  }
 };
void main()
 {
 clrscr();
 derived d1;
 derived1 dd1;
 }
