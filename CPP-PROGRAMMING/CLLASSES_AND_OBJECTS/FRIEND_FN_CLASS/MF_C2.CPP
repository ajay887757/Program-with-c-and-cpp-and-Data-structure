//WAP to granting friendship to member fn of another class
#include<iostream.h>
class first;
class second
  {
  int l, m;
  public:
    void get()
      {
      cout<<"\n Enter l, m";
      cin>>l>>m;
      }
    void show()
      {
      cout<<"\n L="<<l<<" M="<<m;
      }
    void swap(first &);
};
class first
  {
  int x,y;
  public:
    void get()
     {
     cout<<"\n Enter the x and y";
     cin>>x>>y;
     }
    void show()
     {
      cout<<"\n  X="<<x<<"  Y="<<y;
     }
   friend void second::swap(first &);
  };

    void second::swap (first &f)
      {
      int t;
      t=l;
      l=f.x;
      f.x=t;
      t=m;
      m=f.y;
      f.y=t;
      }
void main()
  {
  first f1;
  second s1;
  f1.get();
  s1.get();
  f1.show();
  s1.show();
  s1.swap( f1);
  cout<<"\n After swapping";
  f1.show();
  s1.show();
  }
