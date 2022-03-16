//WAP to swap two objects using member fn 
#include<iostream.h>
class complex
  {
  private:
    int x,y;
  public:
    void get()
      {
      cout<<"\n Enter x and y:";
      cin>>x>>y;
      }
    void show()
      {
      if (y<0)
	cout<<"\n"<<x<<y<<"j";
      else
	cout<<"\n"<<x<<"+"<<y<<"j";
      }
    void swap(complex &c)
      {
       int t;
       t=x; x=c.x; c.x=t;
       t=y; y=c.y; c.y=t;
      }
  };
void main ()
  {
  complex c1,c2;
  cout<<"\nEnter object c1 ";
  c1.get();
  cout<<"\nEnter object c2 ";
  c2.get();
  c1.show();
  c2.show();
  c1.swap(c2);
  cout<<"\n after swapping";
  c1.show();
  c2.show();
  }
