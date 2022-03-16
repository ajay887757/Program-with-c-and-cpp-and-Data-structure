//WAP to calculate addition of two objects 
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
    complex sum(complex c)
      {
      complex t;
      t.x=x+c.x;
      t.y=y+c.y;
      return t;
      }
  };
void main()
  {
  complex c1,c2,c3;
  cout<<"\n enter object c1 ";
  c1.get();
  cout<<"\n enter object c2 ";
  c2.get();
  c1.show();
  c2.show();
  c3=c1.sum(c2);
  cout<<"\n Addition of c1 and c2 ";
  c3.show();
  cout<<"\n Addition of c2 and c2 ";
  c3=c2.sum(c2);
  c3.show();
  cout<<"\n Addition of c1 and c1 ";
  c1=c1.sum(c1);
  c1.show();
  }
