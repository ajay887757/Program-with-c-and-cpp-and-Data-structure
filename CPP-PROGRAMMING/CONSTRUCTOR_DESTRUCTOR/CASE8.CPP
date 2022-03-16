//WAP to demonstrate 'default' and 'default parameterized' constructor
#include<iostream.h>
#include<conio.h>
class demo
  {
  int x, y, z;
  public:
    demo()
    {
    x=0; y=0;
    cout<<"\n DC";
    }
    demo(int a, int b, int c=10)
    {
    x=a; y=b; z=c;
    cout<<"\n DPC";
    }
    void show()
     {
     cout<<"\n X="<<x<<" Y="<<y;
     }
    ~demo()
    {
    cout<<"\nOD";
    }
  };
void main()
  {
  clrscr();
  demo d1, d2; //implicit call of DC
  demo d3(5,9); //implicit call of DPC
  demo d4(1, 2, 3);//implicit call of DPC
  demo d5=demo(10,12);//explicit call of DPC
  demo d6=demo(18,2);//explicit call of DPC
  d1.show();
  d2.show();
  d3.show();
  d4.show();
  d5.show();
  d6.show();
  d1=demo(9,9);//explicit call of DPC for existing object
  d2=demo(1,7,1);//explicit call of DPC for existing object
  }
