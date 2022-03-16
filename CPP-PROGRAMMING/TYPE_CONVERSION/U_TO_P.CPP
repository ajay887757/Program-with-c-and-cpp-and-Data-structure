//WAP to convert userdefined datatype(class) to primitive datatype(int,float...)
#include<iostream.h>
#include<conio.h>
class demo
  {
  int x;
  float y;
  public:
    void get()
      {
      cout<<"\n Enter x and y :";
      cin>>x>>y;
      }
    void show()
      {
      cout<<"\n  X= "<<x<<"  Y= "<<y;
      }
    operator int()//conversion fn
       {
       return x;
       }
    operator float()//conversion fn
       {
       return y;
       }
  };
void main()
  {
  demo d1;
  clrscr();
  d1.get();
  d1.show();
  int a;
  float b;
  a=int(d1);
  b=float(d1);
  cout<<"\n  A= "<<a<<"  and B= "<<b;
  getch();
  }
