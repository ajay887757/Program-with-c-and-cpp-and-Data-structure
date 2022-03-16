//WAP to demonstrate "this" pointer
#include<iostream.h>
#include<conio.h>
class demo
  {
  int x, y;//data member
  public:
    void get()
      {
      int x, y; //local variable 
      cout<<"\n Enter local x and y:";
      cin>>x>>y;
      cout<<"\n Enter Data Member x and y";
      cin>>this->x>>this->y;
      }
    void show()
      {
      cout<<"\n X="<<x<<"  Y="<<y;
      }
    demo retobj()
      {
      return *this;
      }
  };
void main()
  {
  demo d1, d2;
  clrscr();
  cout<<"\nEnter object d1 "; 
  d1.get();
  d1.show();
  d2=d1.retobj();
  d2.show();
  //cout<<this;//Error
  getch();
  }
