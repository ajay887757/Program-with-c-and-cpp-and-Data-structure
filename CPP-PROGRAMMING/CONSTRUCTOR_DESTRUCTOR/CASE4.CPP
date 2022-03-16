//WAP to demonstrate explicait call of PC for existing obj
#include<conio.h>
#include<iostream.h>
class demo
  {
  int x, y;
  public:
    demo()
     {
     x=0; y=0;
     cout<<"\n DC";
     }
    ~demo()
     {
     cout<<"\n OD";
     }
    demo(int a, int b)
     {
     x=a; y=b;
     cout<<"\n PC";
     }
    void show()
     {
     cout<<"\n X="<<x<<" Y="<<y;
     }
  };
void main()
  {
  clrscr();
  demo d1, d2;//implicit(DC)
  demo d3(5, 7);//implicit (PC)
  demo d4=demo(10,12);//Explicit(PC)
  d1.show();
  d2.show();
  d3.show();
  d4.show();
  cout<<"\n"<<(unsigned int)&d1;
  d1=demo(1, 5);//explicit(PC) for existing obj
  cout<<"\n"<<(unsigned int)&d1;
  demo d5;//implicit(DC)
}
