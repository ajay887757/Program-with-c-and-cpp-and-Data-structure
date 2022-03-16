//WAP to divide one object by another object using '/' operator using member fn
#include<iostream.h>
#include<math.h>
#include<conio.h>
#include<iostream.h>
class complex
  {
  float x, y;
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
    complex operator / (complex c)
      {
      complex t;
      int p;
      t.x = x*c.x +(-c.y)*y*(-1);
      t.y = y* c.x + x * c.y;
      p =t.x * t.x + t.y * t.y;
      t.x = t.x/p;
      t.y = t.y/p;
      return t;
      }
  };
void main ()
  {
  complex c1, c2 ,c3;
  clrscr();
  cout<<"\n Enter Object C1 ";
  c1.get ();
  cout<<"\n Enter Object C2 ";
  c2.get ();
  c1.show ();
  c2.show ();
  c3=c1/c2;//calling '/' operator
  c3.show ();
  getch();
  }
