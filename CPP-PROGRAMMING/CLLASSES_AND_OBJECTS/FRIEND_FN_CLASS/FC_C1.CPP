#WAP to grant friendship to another class(first->second)
#include<iostream.h>
class first
  {
  private:
   int x,y;
  friend class second;
  };
class second
  {
  public:
    void getfirst(first &f)
      {
      cout<<"\n Enter x and y of class first:";
      cin>>f.x>>f.y;
      }
    void showfirst(first &f)
      {
      cout<<"\n"<<f.x<<" "<<f.y;
      }
  };
void main()
  {
  first f1;
  second s1;
  s1.getfirst(f1);
  s1.showfirst(f1);
  }
