//WAP to demonstrate 'default para ' constructor ( with all default para )
#include<iostream.h>
#include<conio.h>
class demo
  {
  int x, y, z;
  public:
    demo (int a=10,int b=12, int c=5)
      {
      x=a; y=b; z=c;
      cout<<"\n DPC";
      }
    ~demo ()
      {
      cout<<"\n OD";
      }
  void show()
      {
      cout<<"\n X="<<x<<" Y="<<y;
      }
  };
void main()//..............1
  {
  clrscr();
  demo d1, d2(5);//implicit DPC
  demo d3;//implicit DPC
  demo d4(7,8,9);//implicit DPC
  demo d5=demo();//explixit DPC
  demo d6=demo(8);//explicit DPC
  demo d7=demo(9,9);//explicit DPC
  demo d8=demo(1,1,2);//explicit DPC
  demo d9;//implicit DPC
  d1.show();
  d2.show();
  d3.show();
  d4.show();
  d5.show();
  d6.show();
  d7.show();
  d8.show();
  d9.show();
  demo d10=demo(8,8,2); //explicit DPC
  d10.show();
  d2=demo();//explicit DPC for existing obj
  }
