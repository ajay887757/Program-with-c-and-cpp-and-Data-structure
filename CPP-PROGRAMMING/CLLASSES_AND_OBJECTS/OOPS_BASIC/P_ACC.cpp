//Accesability of private data member from outside the class
#include<iostream.h>
class first
  {
  private:
    int x,y;
  public:
    void get()
      {
      cout<<"\n Enter x and y:";
      cin>>x>>y;
      }
    void show()
      {
      cout<<"\n  X="<<x<<" Y="<<y;
      }
    int retx()
      {
      return x;
      }
    int rety()
      {
      return y;
      }
  };
void main()
  {
  first f1,f2;
  cout<<"\n Enter object f1";
  f1.get();
  cout<<"\n Enter object f2";
  f2.get();
  f1.show();
  f2.show();
  int a,b;
  //a=f1.x;//error
  //b=f2.y;//error
  a=f1.retx();
  b=f2.rety();
  cout<<"\n"<<a<<" "<<b;
}
