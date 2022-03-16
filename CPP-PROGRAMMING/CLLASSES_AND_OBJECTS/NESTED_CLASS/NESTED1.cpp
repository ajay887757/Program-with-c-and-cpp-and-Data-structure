//WAP to demonstrate nested classes where object of inner class is declared 
//    in public part of outer class
#include<iostream.h>
class out
  {
  int x, y;
  class in
    {
    int l, m;
    public:
      void get()
        {
	cout<<"\n Enter l and m:";
	cin>>l>>m;
	}
      void show()
	{
	cout<<"\n L="<<l<<"  M="<<m;
	}
    };
  public:
    in i1;
    void get()
      {
      cout<<"\n Enter x and y";
      cin>>x>>y;
      }
    void show()
      {
      cout<<"\n X="<<x<<"  Y="<<y;
      }
  };
void main()
  {
  out o1;
  cout<<sizeof(o1);
  o1.i1.get();
  o1.get();
  o1.i1.show();
  o1.show();
  }

