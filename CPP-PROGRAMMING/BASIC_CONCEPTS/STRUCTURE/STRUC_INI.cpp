//WAP to initialize structure variable
#include<iostream.h>
#include<conio.h>
struct student
  {
  int sno,m;
  char sname[20];
  float per;
  };
void main()
  {
  clrscr();
  student s1={101,275,"Amit",78},s2={205,206,"Sumit",71};
  cout<<"\n SNO="<<s1.sno<<" SNAME="<<s1.sname<<" MARKS="<<s1.m<<" PERCENTAGE="<<s1.per;
  cout<<"\n SNO="<<s2.sno<<" SNAME="<<s2.sname<<" MARKS="<<s2.m<<" PERCENTAGE="<<s2.per;
  getch();
  }
