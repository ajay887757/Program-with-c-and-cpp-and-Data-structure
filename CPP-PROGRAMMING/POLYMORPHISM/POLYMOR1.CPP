//WAP to demonstrate of polymorphism(without virtual Function)
#include<iostream.h>
#include<conio.h>
class base
 {
 public :
  int x,y;
  void get()
   {
   cout<<"\n Enter X and Y (BASE) :";
   cin>>x>>y;
   }
  void show()
   {
   cout<<"\n X="<<x<<"  Y="<<y;
   }
  void display()
   {
   cout<<"\n Hello Base ";
   }
 };
 class derived :public base
 {
 public :
  int y,z;
  void getdata()
   {
   base::get();
   cout<<"\n Enter Y and Z (DERIVED):";
   cin>>y>>z;
   }
  void show()
   {
   base::show();
   cout<<"\n Y="<<y<<"  Z="<<z;
   }
  void display()
   {
   cout<<"\n Hello Derived ";
   }
 };
void main()
 {
 clrscr();
 base b1,*bp;
 derived d1,*dp;

 bp=&b1;
 bp->get();//calling get() fn (for b1)
 bp->show();//calling show() fn(for b1)
 bp->display();//calling base::display() fn(for b1)

 dp=&d1;
 dp->getdata();//calling getdata() fn (for d1)
 dp->show();//calling derived::show() fn (for d1)
 dp->display();//calling derived::show() fn (for d1)

 //dp=&b1;//error

 bp=&d1;
 bp->show();//calling d1.base::show() fn(for d1)
 bp->display();//calling d1.base::display() fn(for d1)

 bp->x=10;
 bp->y=20;
 //bp->z=30;//error
 //bp->getdata();//error

 bp->show();//calling d1.base::show() fn(for d1)
 bp->display();//calling d1.base::display() fn(for d1)
 getch();
 }






