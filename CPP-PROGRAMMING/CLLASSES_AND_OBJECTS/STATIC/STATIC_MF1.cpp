//WAP to demonstrate inline "static" member function
#include<iostream.h>
#include<conio.h>
class stat
  {
  int x;
  static int y;
  public:
    static void call()
      {
      int z=10;//Local
      //x++;//Non static-Error
      y++;//Static
      cout<<" "<<y;
      }
  };
int stat :: y;
void main()
  {
  stat s1, s2, s3;
  clrscr();
  stat :: call();//calling method of static member fn
  stat :: call();
  stat :: call();
  s3.call();
  s2.call();
  s1.call();
  getch();
  }
