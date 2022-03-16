//WAP to demonstrate only 'parameterized' constructor if 'default'
//constructor is not defined
#include<iostream.h>
#include<conio.h>
class demo
  {
  int x, y;
  public:
  /*  demo()
       {
       x=0;y=0;
       } */
    ~demo()
      {
      cout<<"\n OD";
      }
    demo( int a, int b)
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
  //demo d1,d2;//Error
  demo d3(5,7);
  demo d4(10,12);
  d3.show();
  d4.show();
  //demo d5;//Error
  }
