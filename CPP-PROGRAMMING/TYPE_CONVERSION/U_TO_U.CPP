//WAP to convert userdefined datatype(class) to primitive datatype(int,float...)
#include<iostream.h>
#include<conio.h>
class second;//forword declaration
class first
  {
  int x,y;
  public:
    first()
      {
      x=0;y=0;
      }
    first(int a,int b)
      {
      x=a;y=b;
      }
    void get()
      {
      cout<<"\n Enter x and y :";
      cin>>x>>y;
      }
    void show()
      {
      cout<<"\n  X= "<<x<<"  Y= "<<y;
      }
    operator second();//conversion fn prototype
  };
class second
  {
  int l,m;
  public:
    second()
      {
      l=0;m=0;
      }
    second(int a,int b)
      {
      l=a;m=b;
      }
    void get()
      {
      cout<<"\n Enter l and m :";
      cin>>l>>m;
      }
    void show()
      {
      cout<<"\n  L= "<<l<<"  M= "<<m;
      }
   operator first()
      {
      return first(l,m);
      }
  };
first::operator second()
   {
   return second(x,y);
   }
void main()
  {
  clrscr();
  first f1,f2;
  second s1,s2;
  f1.get();
  s1.get();
  cout<<"\n Values of f1 object ";
  f1.show();
  cout<<"\n Values of s1 object ";
  s1.show();
  f2=first(s1);//calling or conversion fn from class second and s1 is invoking object
  s2=second(f1);//calling or conversion fn from class first and f1 is invoking object
  cout<<"\n Values of f2 object ";
  f2.show();
  cout<<"\n Values of s2 object ";
  s2.show();
  getch();
  }
