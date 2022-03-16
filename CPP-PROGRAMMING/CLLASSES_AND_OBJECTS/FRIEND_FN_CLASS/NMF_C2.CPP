#include<iostream.h>
class second;//Forward Declaration
class first
  {
   int x,y;
   public:
     void get()
       {
	cout<<"\n Enter x and y";
	cin>>x>>y;
       }
     void show()
       {
	cout<<"\n X="<<x<<" Y="<<y;
       }
     friend first sum(first,second);//granting friendship
  };
class second
  {
   int l, m;
   public:
     void get()
       {
	 cout<<"\n Enter l, m";
	 cin>>l>>m;
       }
     void show()
       {
	cout<<"\n L="<<l<<"  M="<<m;
       }
      friend first sum(first,second);
  };
first sum(first f, second s)
  {
   first t;
   t.x=f.x+s.l;
   t.y=f.y+s.m;
   return t;
  }
void main()
  {
   first f1,f2;
   second s1;
   f1.get();
   s1.get();
   f1.show();
   s1.show();
   f2=sum(f1, s1);
   cout<<"\n Sum Of f1 and s2 ";
   f2.show();
  }
