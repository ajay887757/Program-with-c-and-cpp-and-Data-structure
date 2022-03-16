//WAP to get value of structure using pointer
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
  student s1,*p;
  p=&s1;
  clrscr();
  cout<<"\n Enter the sno,sname and m of s1:";
  cin>>p->sno>>p->sname>>p->m;
  p->per=p->m/4.0;
  cout<<"\n SNO="<<p->sno<<" SNAME="<<p->sname<<" MARKS="<<p->m<<" PERCENTAGE="<<p->per;
  getch();
  }
