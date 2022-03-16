//WAP to overload '-' operators using friend fn
#include<iostream.h>
#include<conio.h>
class complex
  {
  int x, y;
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
    friend complex operator + (complex , complex)
  };
complex operator + (complex A, complex B)
  {
  complex t;
  t.x=A.x+B.x;
  t.y=A.y+B.y;
  return t;
  }
void main ()
  {
  complex c1, c2 ,c3;
  clrscr();
  cout<<"\n Enter objects c1 c2";
  c1.get();
  c2.get();
  c1.show();
  c2.show();
  c3=c1+c2;
  c3.show();
  getch();
  }
