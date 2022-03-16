//WAP to demonstrate of offline member fn
#include<iostream.h>
class first
  {
  private:
    int x,y;
  public:
    void get();
    void show();
    int retx();
    int rety();
  };
void first::get()
  {
  cout<<"\n Enter x and y:";
  cin>>x>>y;
  }
void first::show()
  {
  cout<<"\n X="<<x<<" Y="<<y;
  }
int first::retx()
  {
  return x;
  }
int first::rety()
  {
  return y;
  }
void main()
  {
  first f1,f2;
  cout<<"\nEnter object f1 ";
  f1.get();
  cout<<"\nEnter object f2 ";
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
