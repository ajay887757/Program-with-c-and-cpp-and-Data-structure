//WAP to assogn one object into another object using '=' operator using member fn
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
    complex operator = (complex c)
      {
      x= c.x;
      y=c.y;
      return *this;
      }
  };
void main()
  {
  complex c1,c2, c3, c4,c5;
  clrscr();
  cout<<"\n Enter Ojjects c1,c2,c3,c4 ";
  c1.get();
  c2.get();
  c3.get();
  c4.get();
  cout<<"\n Values Of c1 c2 c3 c4 objects ";
  c1.show();
  c2.show();
  c3.show();
  c4.show();
  c2=c1;
  c2.show();
  c4=c3=c2=c1;
  c1.show();
  c2.show();
  c3.show();
  c4.show();
  getch();
  }
