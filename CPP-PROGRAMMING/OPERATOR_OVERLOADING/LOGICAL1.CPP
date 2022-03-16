//WAP to overload '&&','||' and '!' operators using member fn
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
    int operator && (complex c)
      {
      float m1,m2;
      m1=sqrt(x*x + y*y);
      m2=sqrt(c.x *c.x+c.y*c.y);
      if(m1&&m2)
	return 1;
      else
	return 0;
      }
    int operator||(complex c)
     {
     float m1,m2;
     m1 =  sqrt(x*x+y*y);
     m2 = sqrt(c.x*c.x+c.y*c.y);
     if(m1||m2)
       return 1;
     else
       return 0;
     }
  int operator!()
    {
    float m;
    m = sqrt(x*x+y*y);
    if(!m)
      return 1;
    else
      return 0;
    }
  };
void main ()
  {
  complex c1, c2, c3;
  clrscr();
  cout<<"\n Enter objects c1 c2 c3 ";
  c1.get ();
  c2.get ();
  c3. get();
  c1.show ();
  c2.show ();
  c3. show ();
  if(c1&&c2)
    cout<<"\n Hello India";
  if(c2||c3)
   cout<<"\n Hello Bhopal";
  if(!c3)
   cout<<"\n Good bye";
  getch();
  }
