//WAP to demonstrate nested classes where object of inner class is declared 
//    in private part of outer class
#include<iostream.h>
class out
  {
  int x,y;
  class in
    {
    int l, m;
    public:
      void get()
	{
	cout<<"\n Enter x and y:";
	cin>>l>>m;
	}
      void show()
	{
	cout<<"\n  L= "<<l<<" M= "<<m;
	}
    };
  in i1;
  public:
    void get()
      {
      i1.get();
      cout<<"\n Enter x and y";
      cin>>x>>y;
      }
    void show()
      {
      i1.show();
      cout<<"\n X= "<<x<<" Y= "<<y;
      }
  };
void main()
  {
  out o1;
  cout<<sizeof(o1);
  o1.get();
  o1.show();
  }
