//WAP to demonstrate of pure virtual function
#include<iostream.h>
#include<conio.h>
class shape
 {
 public :
  int a,b;
  float r;
  virtual void area()=0;//pure virtual funciton

 };
class triangle:public shape
 {
 public :
  void get()
    {
    cout<<"\n Enter Sides of triangle :";
    cin>>a>>b;
    }
  void area()
   {
   cout<<"\n Area of triangle="<<0.5*a*b;
   }
 };
class rectangle:public shape
 {
 public :
  void get()
    {
    cout<<"\n Enter Sides of rectangle :";
    cin>>a>>b;
    }
  void area()
   {
   cout<<"\n Area of rectangle="<<a*b;
   }
 };
class circle:public shape
 {
 public :
  void get()
    {
    cout<<"\n Enter redius of circle :";
    cin>>r;
    }
  void area()
   {
   cout<<"\n Area of circle="<<3.14*r*r;
   }
 };
void main()
 {
 clrscr();
 shape *p;
 triangle t1;
 rectangle r1;
 circle c1;

 t1.get();
 r1.get();
 c1.get();

 p=&t1;
 p->area();

 p=&r1;
 p->area();

 p=&c1;
 p->area();

 //shape s1;//error due to abstract class
 getch();
 }

