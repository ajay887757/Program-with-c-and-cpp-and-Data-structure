//WAP to demonstrate initialization of "const" data member
#include<iostream.h>
#include<conio.h>
class constant
  {
  const int x, y;
  public:
    constant():x(0),y(0)
    {
    //x=0;y=0;//error "const" data member con't be intialize inside
    //constructor body
    }
  constant(int a,int b):x(a),y(b)
    {
    //x=a; y=b;
    }
    void show()
     {
     cout<<"\n X="<<x<<"  Y="<<y; 
     }
   ~constant()
     {
     cout<<"\n OD";
     }
  };
void main()
  {
  clrscr();
  constant c1;
  constant c2(12,5);
  c1.show();
  c2.show();
  getch();
  }
