//WAP to demonstrate 'default' ,'parameterized' and 'copy' constructor
#include<iostream.h>
#include<conio.h>
class demo
  {
  int x, y;
  public:
    demo()
      {
      x=0; y=0;
      cout<<"\n DC";
      }
    demo(int a, int b)
      {
      x=a; y=b;
      cout<<"\n PC";
      }
    demo (const demo &D)
      {
      x=D.x; y=D.y;
      cout<<"\n CC";
      }
    void show()
      {
      cout<<"\n X="<<x<<" Y="<<y;
      }
    ~demo ()
      {
      cout<<"\n OD";
      }
  };
void main()
  {
  clrscr();
  demo d1, d2;
  demo d3(5,7);
  demo d4=demo(10,12);
  d1.show();
  d2.show();
  d3.show();
  d4.show();
  demo d5(d3);
  demo d6=d4;
  d5.show();
  d6.show();
  }
