//WAP to create dynamic single object
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
  };
void main()
  {
  complex *p;
  clrscr();
  p=new complex;
  p->get();
  p->show();
  delete p;
  getch();
  }
