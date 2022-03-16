//WAP to initialize "const" data member
#include<iostream.h>
class constant
  {
  const int x,y;
  public:
    constant():x(0),y(0)
      {
      //x=0;y=0;
      }
    constant(int a,int b):x(a),y(b)
      {
      //x=a; y=b;
      }
    void show()
      {
      cout<<"x= "<<x<<"y= "<<y;
      }

  };
void main ()
  {
  constant c1;
  constant c2(2,7);
  c1.show();
  c2.show();
  }
