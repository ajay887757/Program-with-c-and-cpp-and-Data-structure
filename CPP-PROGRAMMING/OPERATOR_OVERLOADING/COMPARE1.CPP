//WAP to compare three object using '>' operator using member fn
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
     int operator > (complex c)
      {
      float m1,m2;
      m1 = sqrt(x*x+y*y);
      m2 = sqrt(c.x*c.x+c.y*c.y);
      if(m1>m2)
	return 1;
      else
	return 0;
      }
  };
void main ()
  {
  complex c1, c2, c3;
  clrscr();
  cout<<"\n Enter Value Of Object c1 ";
  c1.get ();
  cout<<"\n Enter Value Of Object c2 ";
  c2.get ();
  cout<<"\n Enter Value Of Object c3 ";
  c3.get ();
  c1.show();
  c2.show();
  c3.show();
  if(c1>c2)
    {
    if(c1>c3)
      cout<<"\n c1 is big";
    else
      cout<<"\n c3 is big";
    }
  else if (c2>c3)
    cout<<"\n c2 is big";
  else
    cout<<"\n c3 is big";
  getch();
  }
