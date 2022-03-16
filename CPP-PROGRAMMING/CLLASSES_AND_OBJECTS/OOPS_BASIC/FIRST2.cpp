//WAP to to demonstrate datamember and member fn
#include<iostream.h>
class first
  {
  private:
    int x,y; //Data member
  public:
    void get() //Member function
      {
      cout<<"\n Enter x and y: ";
      cin>>x>>y;
      }
    void show()
      {
      cout<<"\n X="<<x<<" Y="<<y;
      }
  };
void main()
  {
  first f1,f2;
  cout<<"\n Enter object f1 ";
  f1.get();
  cout<<"\n Enter object f2 ";
  f1.show();
  f2.get();
  f2.show();
  }
