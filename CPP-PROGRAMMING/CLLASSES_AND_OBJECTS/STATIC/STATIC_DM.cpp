//WAP to demonstrate "static" data member
#include<iostream.h>
#include<conio.h>
class stat
  {
  static int y; //Declare
  public:
    void call()
      {
      y++;
      cout<<"\n"<<y;
      }
  };
  int stat::y; //Definition (Memory Created)
     //or
//int stat::y=50;//Definition with Initialization.
void main()
  {
  stat s1, s2, s3;
  clrscr();
  cout<<sizeof(s1)<<sizeof(s2)<<sizeof(s3);
  s1.call();
  s2.call();
  s3.call();
  s3.call();
  s2.call();
  s1.call();
  getch();
  }
