//WAP to overload '>>' and '<<' operator using friend fn
#include<iostream.h>
#include<math.h>
#include<conio.h>
class complex
  {
  int x, y;
  public:
    friend istream& operator>>(istream& , complex&);
    friend ostream& operator<<(ostream& , complex&);
  };
istream& operator >>(istream &fin, complex &c)
  {
  cout<<"\n Enter x, y";
  fin>>c.x>>c.y;
  return fin;
  }
ostream& operator << (ostream &fout , complex &c)
  {
  if(c.y>0)
    fout<<"\n"<<c.x<<c.y<<"y";
  else
    fout<<"\n"<<c.x<<"+"<<c.y<<"y";
  return fout;
  }
void main()
  {
  complex c1, c2 ,c3 ,c4;
  clrscr();
  cout<<"\n Enter c1 ";
  cin>>c1;
  cout<<c2;
  cout<<"\n Enter Multiple Objects c1 , c2 ,c3 , c4 ";
  cin>>c1>>c2>>c3>>c4;
  cout<<c1<<c2<<c3<<c4;
  getch();
  }
