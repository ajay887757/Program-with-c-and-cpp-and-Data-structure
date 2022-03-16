//WAP to demonstrate offline member fn
#include<iostream.h>
#include<conio.h>
class stat
  {
  int x;
  static int y;
  public:
    static void call();
  };
int stat :: y;
void stat :: call()
  {
  int z=10;
  //x++;//Error
  y++;
  cout<<"\n"<<y;
  }
void main()
  {
  stat s1, s2, s3;
  clrscr();
  stat :: call();
  stat :: call();
  stat :: call();
  s3.call();
  s2.call();
  s1.call();
  getch();
  }
