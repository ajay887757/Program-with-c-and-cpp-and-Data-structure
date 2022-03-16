//WAP to demonstrate to passing objs into fn and calling 'copy' constructor
#include<iostream.h>
#include<conio.h>
class demo
  {
  int x, y;
  public:
    demo ()
      {
      x=0 ; y=0;
      cout<<"\n DC";
      }
    demo(int a, int b)
      {
      x=a ;y=b;
      cout<<"\n PC";
      }
    demo(const demo &D)
      {
      x=D.x; y=D.y;
      cout<<"\n CC";
      }
    ~demo()
      {
      cout<<"\n OD";
      }
    void show()
      {
      cout<<"\n X="<<x<<" Y="<<y;
      }
    demo sum(demo A ,demo B)
      {
      demo C;
      C.x=A.x+B.x;
      C.y=A.y+B.y;
      return C;
      }
  };
void main()
  {
  clrscr();
  demo d1, d2;
  demo d3(5,7);
  d1.show();
  d2.show();
  d3.show();
  demo d4=demo(10,12);
  d4.show();
  d2=d1.sum(d3,d4);
  cout<<"\n Adition of d3 and d4 ";
  d2.show();
  }
