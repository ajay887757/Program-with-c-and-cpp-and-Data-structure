//WAP to overload increment and decrement operator using member fn method
#include<iostream.h>
#include<math.h>
#include<conio.h>
class complex
  {
  int x, y;
  public:
    void get ()
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
    complex operator ++ ()
      {
      x=x+1;
      return *this;
      }
    complex operator--()
      {
      x=x-1;
      return * this;
      }
    complex operator ++(int)
      {
      x = x+1;
      return *this;
      }
    complex operator --(int)
      {
      x = x-1;
      return *this;
      }
     complex operator +( complex c)
      {
       complex t;
       t.x=x+c.x;
       t.y=y+c.y;
       return t;
      }
  };
void main ()
  {
  complex c1,c2,c3,c4;
  clrscr();
  cout<<"\n Enter Objects c1 , c2 and c3 ";
  c1.get();
  c2.get();
  c3.get();
  c1.show();
  c2.show();
  c3.show();
  ++c1;
  --c2;
  c1.show();
  c2.show();
  c1++;
  c2--;
  c1.show();
  c2.show();
  c4=++c1+c2--+c3+++c1++;
  c1.show();
  c3.show();
  c4.show();
  getch();
  }
