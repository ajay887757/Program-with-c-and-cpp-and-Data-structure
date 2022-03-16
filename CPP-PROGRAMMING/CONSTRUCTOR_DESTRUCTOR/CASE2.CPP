//WAP to demonstrate 'default' and 'parameterized' constructor
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
    ~demo()
      {
      cout<<"\n OD";
      }
    demo(int a, int b)
      {
      x=a;
      y=b;
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
  demo d1,d2;// implicitly call of DC.
  demo d3(5,7);// implicitly call of PC.
  demo d4=demo(10,12);//Explicitly call PC.
  demo d5;
  d1.show();
  d2.show();
  d3.show();
  d4.show();
  d5.show();
  }
