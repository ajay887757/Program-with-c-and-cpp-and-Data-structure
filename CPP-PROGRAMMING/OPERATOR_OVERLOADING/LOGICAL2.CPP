//WAP to overload '&&','||' and '!' operators using friend fn
#include<iostream.h>
#include<conio.h>
#include<math.h>
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
    friend int operator && (complex , complex);
    friend operator || (complex , complex);
    friend int operator ! (complex);
  };
int operator && (complex A, complex B)
  {
  float m1,m2;
  m1 = sqrt(A.x*A.x+A.y*A.y);
  m2 = sqrt(B.x*B.x+B.y*B.y);
  if(m1&&m2)
    return 1;
  else
    return 0;
  }
int operator || (complex A , complex B)
  {
  float m1, m2;
  m1 = sqrt(A.x*A.x+A.y*A.y);
  m2 = sqrt(B.x*B.y+B.y*B.y);
  if(m1||m2)
    return 1;
  else
    return 0;
  }
int operator !(complex A)
  {
  float m;
  m= sqrt(A.x*A.x+A.y+A.y);
  if(!m)
    return 1;
  else
    return 0;
  }
void main ()
  {
  complex c1 ,c2 ,c3;
  clrscr();
  cout<<"\n Enter objects c1 c2 c3 ";
  c1.get ();
  c2.get ();
  c3.get ();
  c1. show ();
  c2.show  ();
  c3.show ();
  if(c1&&c2)
    cout<<"\n Hello Bhopal";
  if(c2||c3)
    cout<<"\n Hello India";
  if(!c3)
    cout<<"\n Good Bye";
  getch();
  }
