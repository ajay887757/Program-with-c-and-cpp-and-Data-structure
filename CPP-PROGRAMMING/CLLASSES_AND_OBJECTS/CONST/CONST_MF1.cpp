//WAP to demonstrate "const" member fn (Inline)
#include<iostream.h>
class constant
  {
  int x, y;
  public:
    void get()
      {
      cout<<"\n Enter x and y";
      cin>>x>>y;
      }
    void show()
      {
      cout<<"\n  X="<<x<<" Y="<<y;
      }
    void call() const
      {
      int a, b;
      a=x;
      b=y;
      //x=10;//Error
      //y=20;//Error
      }
  };
void main()
  {
  constant c1;
  c1.get();
  c1.show();
  c1.call();
  c1.show();
  }
