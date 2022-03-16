//WAP to demonstrate of Hirerchical (tree) inheritance
#include<iostream.h>
#include<conio.h>
class emp
 { int eno;
   char ename[20];
   public:
    void get()
     { cout<<"\n Enter eno and ename :";
       cin>>eno>>ename;
     }
    void show()
     {cout<<"\n ENO="<<eno<<" ENAME="<<ename;
     }
 };
class permanent : emp
 {float basic,hra,da,pf,gpf,gsal;
  public :
   void get()
    { emp::get();
      cout<<"\n Enter Basic HRA DA PF and GPF:";
      cin>>basic>>hra>>da>>pf>>gpf;
      gsal=basic+hra+da-(pf+gpf);
    }
   void show()
    { emp::show();
      cout<<"\nGRAND SALARY="<<gsal;
    }
  };
class temprory : emp
 {float sal_p_day,bonus,ta,gsal;
  int no_of_att;
  public :
   void get()
    { emp::get();
      cout<<"\n Enter Salary per day,No of Attendence,Bonus,Ta:";
      cin>>sal_p_day>>no_of_att>>bonus>>ta;
      gsal=sal_p_day*no_of_att+bonus+ta;
    }
   void show()
    { emp::show();
      cout<<"\nGRAND SALARY="<<gsal;
    }
  };
void main()
 { 
   clrscr(); 
   permanent p1;
   temprory t1;
   cout<<"\n"<<sizeof(p1)<<" "<<" "<<sizeof(t1);
   p1.get();
   t1.get();
   p1.show();
   t1.show();
   getch();
 }
