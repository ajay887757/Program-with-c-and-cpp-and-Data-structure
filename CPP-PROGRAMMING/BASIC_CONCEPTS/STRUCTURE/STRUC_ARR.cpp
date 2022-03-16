//WAP to demonstrate array of structure
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
  student s[10];
  clrscr();
  cout<<"\n"<<sizeof(s)<<" "<<sizeof(s[10]);
  for(int i=0;i<10;i++)
   {
   cout<<"\n Enter sno,sname and m";
   cin>>s[i].sno>>s[i].sname>>s[i].m;
   s[i].per=s[i].m/3.0;
   }
  for(i=0;i<10;i++)
     cout<<"\n SNO="<<s[i].sno<<" SNAME="<<s[i].sname<<" MARKS="<<s[i].m<<" PERCENTAGE="<<s[i].per;
  getch(); 
  }
