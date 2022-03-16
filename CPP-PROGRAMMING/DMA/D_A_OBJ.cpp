//WAP to create dynamic array of object
#include<iostream.h>
#include<conio.h>
class complex
  {
  int x,y;
  public:
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
  complex *p;
  int n;
  clrscr();
  cout<<"\n Enter no of object";
  cin>>n;
  p=new complex[n];
   for(int i=0;i<n;i++)
      p[i].get();// or (p+i)->get();
  for(i=0;i<n;i++)
      p[i].show();// or (p+i)->show();
  delete []p;
  getch();
  }
