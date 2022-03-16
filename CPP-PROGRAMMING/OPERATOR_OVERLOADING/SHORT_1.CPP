//WAP to overload '+=' operators using member fn
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
    complex operator += (complex c)
      {
      complex temp;
      temp.x = x+c.x;
      temp.y = y+c.y;
      return temp;
      }
  };
void main()
  {
  complex c1, c2, c3, c4, c5;
  clrscr();
  cout<<"\n Enter objects c1 c2 c3 c4 c5";
  c1.get();
  c2.get();
  c3.get();
  c4.get();
  c5.get();
  c1.show();
  c2.show();
  c3.show();
  c4.show();
  c5.show();
  c2+=c1;
  c2.show();
  c5+=c4+=c3+=c2+=c1;
  c3.show();
  c4.show();
  c5.show();
  getch();
  }