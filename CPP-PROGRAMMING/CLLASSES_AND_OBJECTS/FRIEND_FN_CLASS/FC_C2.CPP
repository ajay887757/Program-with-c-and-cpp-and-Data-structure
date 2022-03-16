//WAP to grant friendship to another class ( second-> first)
#include<iostream.h>
class second
  {
  private:
   int l,m;
  friend class first;
  };
class first
  {
  public:
    void getsecond(second &s)
      {
      cout<<"\n Enter l and m of class second :";
      cin>>s.l>>s.m;
      }
    void showsecond(second &s)
      {
      cout<<"\n L="<<s.l<<"  M="<<s.m;
      }
  };
void main()
  {
  first f1;
  second s1;
  f1.getsecond(s1);
  f1.showsecond(s1);
  }
