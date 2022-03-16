//WAP to demonstrate of multiple inheritance
#include<iostream.h>
#include<conio.h>
class student
 { int sno;
   char sname[20];
   public:
    void get()
     { cout<<"\n Enter sno and sname :";
       cin>>sno>>sname;
     }
    void show()
     {cout<<"\n SNO="<<sno<<" SNAME="<<sname;
     }
 };
class marks
 { protected:
    int m1,m2,m3;
  public :
   void get()
    {
      cout<<"\n Enter m1 , m2 and m3 :";
      cin>>m1>>m2>>m3;
    }
   void show()
    {
      cout<<"\nM1="<<m1<<" M2="<<m2<<" M3="<<m3;
    }
  };
class result : marks , student
 { int tot_m;float per;
  public:
   void get()
    {student::get();
     marks::get();
     tot_m=m1+m2+m3;
     per=tot_m/3.0;
    }
   void show()
    {student::show();
     marks::show();
     cout<<"\nTOTAL MARKS="<<tot_m<<" PER="<<per;
    }
 };
void main()
 { result r1;
   cout<<"\n"<<sizeof(r1);
   r1.get();
   r1.show();
   getch();
 }
