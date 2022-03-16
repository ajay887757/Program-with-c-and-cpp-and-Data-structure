//WAP to demonstrate 'default' , 'parameterized' and
#include<iostream.h>
#include<conio.h>
class demo
  {
  int x, y, z;
  public:
    demo ()
    {
    x=0;y=0;
    cout<<"\n DC";
    }
   /* demo(int a,int b,int c)
    {
    x=a; y=b; z=c;
    cout<<"\n PC";
    }*/
    demo(int a,int b,int c=10)
    {
    x=a; y=b; z=c;
    cout<<"\n DPC";
    }
    void show()
     {
     cout<<"\n X="<<x<<"  Y="<<y; 
     }
   ~demo()
   {
   cout<<"\n OD";
   }
  };
void main()
  {
  clrscr();
  demo d1,d2;
  demo d3(5,9);
  demo d4(1,2,3);
  demo d5=demo(10,12);
  demo d6=demo(8,8,2);
  d1.show();
  d2.show();
  d3.show();
  d4.show();
  d5.show();
  d6.show();
  d1=demo(9,9);
  d2=demo(1,7,1);
  d1.show();
  d2.show();
  }
