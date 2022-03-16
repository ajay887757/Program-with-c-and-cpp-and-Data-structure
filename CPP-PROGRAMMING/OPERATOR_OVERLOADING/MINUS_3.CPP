#include<iostream.h>
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
     complex operator +( complex c)
      {
       complex t;
       t.x=x+c.x;
       t.y=y+c.y;
       return t;
      }
     friend complex operator -(complex);
     friend complex operator -(complex , complex);
  };
complex operator -(complex c)
  {
  complex t;
  t.x = -c.x;
  t.y = -c.y;
  return t;
  }
complex operator -(complex A, complex B)
  {
  complex t;
  t.x = A.x-B.x;
  t.y = A.y-B.y;
  return t;
  }
void main ()
  {
  complex c1, c2 ,c3;
  clrscr();
  c1.get();
  c2.get();
  c1.show();
  c2.show();
  c2 = -c1;
  c2.show();
  c3 = c1+(-c2);
  c3.show();
  c3 = c1-c2;
  c3.show();
  getch();
  }
