//WAP to overload increment and decrement operator using friend fn method
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
    complex operator +( complex c)
      {
       complex t;
       t.x=x+c.x;
       t.y=y+c.y;
       return t;
      }
    friend complex& operator ++ (complex &);
    friend complex& operator -- (complex &);
    friend complex& operator ++ (complex &,int);
    friend complex& operator -- (complex &,int);
  };
complex& operator++(complex &c)
  {
  c.x = c.x+1;
  return c;
  }
complex& operator --(complex &c)
  {
  c.x=c.x-1;
  return c;
  }
complex& operator ++ (complex &c,int)
  {
  c.x = c.x+1;
  return c;
  }
complex& operator --(complex &c,int)
  {
  c.x = c.x-1;
  return c;
  }
void main ()
  {
  complex c1, c2, c3, c4, c5;
  clrscr();
  cout<<"\n Enter objects c1 c2 c3 and c4 ";
  c1.get();
  c2.get();
  c3.get();
  c4.get();
  ++c1;
  --c2;
  c1.show();
  c2.show();
  c5= ++c1+c2--+--c3+c4++;
  c1.show();
  c2.show();
  c3.show();
  c4.show();
  c5.show();
  getch();
  }
