//WAP to demonstrate private/protected/public inheritance 
#include<iostream.h>
#include<conio.h>
class base
  {
  private:
    int x;
  protected:
    int y;
  public:
    int z;
  };
class derived : private base // or protected base //or public base
  {
  private:
    int l;
  protected:
    int m;
  public:
    int n;
  };
void main()
  {
  clrscr();
  derived d1;
  cout<<"\n"<<sizeof(d1);
  d1.x=1;
  d1.y=2;
  d1.z=3;
  d1.l=4;
  d1.m=5;
  d1.n=6;
  getch();
  };
