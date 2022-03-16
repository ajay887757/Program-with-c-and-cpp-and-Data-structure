// WAP to demonstrate of parameterized constructor inheritance
#include<iostream.h>
#include<conio.h>
class base
 {
 int x,y;
 public:
 base()
  {
  x=0; y=0;
  }
 base (int a,int b)
  {
  x=a; y=b;
  }
 void show()
  { cout<<"\nX="<<x<<" Y="<<y;
  }
 };
class derived:private base //protected base // public base
 {
 int z;
 public:
 derived()
  {
  z=0;
  }
 derived(int a)
  {
  z=a;
  }
 derived(int a,int b,int c):base(a,b)
  {
  z=c;
  }
 void show()
  { base::show();
    cout<<"  Z="<<z;
  }
 };
void main()
 {
 clrscr();
 derived d1;
 derived d2(10);
 derived d3(5,10,2);
 d1.show();
 d2.show();
 d3.show();
 getch()
 }
