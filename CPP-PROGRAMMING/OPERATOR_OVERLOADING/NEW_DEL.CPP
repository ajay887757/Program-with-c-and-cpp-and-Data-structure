//WAP to overload 'new' and 'delete' operator
#include<iostream.h>
#include<conio.h>
class complex
  {
   int x, y;
   public:
     complex()
       {
       x=0;y=0;
       }
     complex(int a,int b)
       {
       x=a;y=b;
       }
     void get()
      {
       cout<<"\n Enter x and y:";
       cin>>x>>y;
       }
     void show()
      {
       if (y<0)
	 cout<<"\n"<<x<<y<<"j";
       else
	 cout<<"\n"<<x<<"+"<<y<<"j";
       }

   };
void main()
   {
   clrscr();
   complex *p,*q;
   p=new complex;
   q=new complex(3,5);
   p->show();
   q->show();
   getch();
   }