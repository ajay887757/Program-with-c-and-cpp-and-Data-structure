//WAP to distinctguish private and data member those are declare with same name
#include<iostream.h>
class first
  {
  private:
    int x,y; //Data Member
  public:
    void get()
      {
      int x,y; //Local
      cout<<"\n Enter the local x and y";
      cin>>x>>y;
      cout<<"\n Enter the Data member x and y:";
      cin>>first::x>>first::y;
      }
    void show()
      {
      cout<<"\n X="<<x<<" Y="<<y;
      }
  };
void main()
  {
  first f1;
  cout<<sizeof(f1);
  cout<<"\n Enter object f1 "
  f1.get();
  f1.show();
  }
