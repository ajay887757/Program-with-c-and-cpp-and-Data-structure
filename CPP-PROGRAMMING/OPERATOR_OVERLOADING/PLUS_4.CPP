//WAP overload '+' operator (object+int) using friend fn method 
#include<iostream.h>
#include<conio.h>
class complex
  {
  int x,y;
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

     friend complex operator + (complex,int)
  };
complex operator +(complex A,int p)
  {
  complex t;
  t.x=A.x+p;
  t.y=A.y;
  return t;
  }
void main()
  {
  complex c1, c2;
  clrscr();
  cout<<"\n Enter objects c1";
  c1.get ();
  c1.show ();
  c2= c1+10;
  c2.show ();
  getch();
  }