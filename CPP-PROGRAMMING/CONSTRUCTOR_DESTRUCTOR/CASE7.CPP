//WAP to 'default parameterized' constructor
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
    void show()
      {
      cout<<"\n X="<<x<<" Y="<<y;
      }
    ~demo ()
      {
      cout<<"\n OD";
      }
  };
void main()//..............2
  {
  clrscr();
  demo d1, d2(5);//implecit call DPC
  demo d3(); //fn prototype
  demo d4(7,8,9); //implicit call of DPC
  demo d5=demo();//explicit call of DPC
  demo d6=demo(8);//explicit call of DPC
  demo d7=demo(9,9);//explicit call of DPC
  demo d8=demo(1,1,2);//explicit call of DPC
  demo d10();//fn prototype
  d1=demo(8,8,2);//explicit call of DPC for existing obj
  d2=demo();//explicit call of DPC
  }
