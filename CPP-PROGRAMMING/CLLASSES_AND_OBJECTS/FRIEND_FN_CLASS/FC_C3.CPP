//WAP to grant friendship to another class(first->second)
#include<iostream.h>
class second;
class first
  {
  private:
   int x,y;
  public:
  void getsecond(second &);
  void showsecond(second &);
  friend class second;
  };
class second
  {
  int l,m;
  public:
    void getfirst(first &);
    void showfirst(first &);
    friend class first;
  };
void first::getsecond(second &s)
    {
    cout<<"\n Enter l and m of class second :";
    cin>>s.l>>s.m;
    }
void first::showsecond(second &s)
    {
    cout<<"\n L="<<s.l<<"  M="<<s.m;
    }
void second::getfirst(first &f)
    {
    cout<<"\n Enter x and y of class first:";
    cin>>f.x>>f.y;
    }
void second::showfirst(first &f)
    {
    cout<<"\n X="<<f.x<<" Y="<<f.y;
    }
void main()
  {
  first f1;
  second s1;
  cout<<"\n Enter Values of f1 ";
  s1.getfirst(f1);//entering values of f1 using member fn of class second
  cout<<"\n Enter Values of s1 ";
  f1.getsecond(s1);//entering values of s1 using member fn of class first
  s1.showfirst(f1);//displaying values of f1 using member fn of class second
  f1.showsecond(s1);//displaying values of s1 using member fn of class first
  }

