//WAP to demonstrate of private inheritance ( diff member function)
#include<iostream.h>
#include<conio.h>
class base
 { int x,y ; //by default private
   public :
    void get()
	 { cout<<"\n Enter X and Y :";
	   cin>>x>>y;
	 }
    void show()
	 { cout<<"\nX="<<x<<"  Y="<<y;
	 }
 };
class derived : private base
 { int l,m ; //by default private
   public :
    void get()
	 { base::get();
	   cout<<"\n Enter L and M :";
	   cin>>l>>m;
	 }
    void show()
	 {base::show();
	  cout<<"\nL="<<l<<"  M="<<m;
	 }
 };
void main()
  { clrscr();
    derived d1;
    //d1.base::get();
    d1.get();
    //d1.base::show();
    d1.show();
    getch();
  }
