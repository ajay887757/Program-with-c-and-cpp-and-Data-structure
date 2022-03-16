//WAP to demonstrate default constructor
#include<iostream.h>
#include<conio.h>
class demo
  {
  int x, y;
  public:
   demo()
     {
     x=0; y=0; //Default constructor
     cout<<"\nDC"<<(unsigned int) this;
     }
   ~demo()
     {
     cout<<"\n"<<"OD"<<(unsigned int)this;
     }
   void show()
     {
     cout<<"\n X="<<x<<" Y="<<y;
     }
  };
void main()
  {
  clrscr();
  demo d1,d2,d3;// implicit call of default constructor
  //getch() //pls dont use getch() fn otherwise object will be destroyed
	    // after execution  of getch() fn
  d1.show();
  d2.show();
  d3.show();
  }
