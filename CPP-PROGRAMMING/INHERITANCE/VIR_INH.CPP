//WAP to demonstrate of multilevel inheritance
#include<iostream.h>
#include<conio.h>
class student
 {public:
   int sno;
   char sname[20];
 };
class marks : virtual public student
 {public:
    int m1,m2,m3;
 };
class games : public virtual student
 {
 public:
   int g_marks;
 };
class result : marks , games
 { int tot_m;float per;
  public:
   void get()
    {
    cout<<"\n Enter sno and sname :";
    cin>>sno>>sname;
    cout<<"\n Enter m1 , m2 and m3 :";
    cin>>m1>>m2>>m3;
    tot_m=m1+m2+m3;
    per=tot_m/3.0;
    }
   void show()
    {cout<<"\n SNO="<<sno<<" SNAME="<<sname;
     cout<<"\nM1="<<m1<<" M2="<<m2<<" M3="<<m3;
     cout<<"\nTOTAL MARKS="<<tot_m<<" PER="<<per;
    }
 };
void main()
 { clrscr();
   result r1;
   cout<<"\n"<<sizeof(r1);
   r1.get();
   r1.show();
   getch();
 }
