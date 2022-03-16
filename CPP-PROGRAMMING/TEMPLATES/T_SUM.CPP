//WAP to generic function to calculate sum of different(mix) datatype
#include<iostream.h>
#include<conio.h>
#include<string.h>
template<class X,class Y>
void sum(X a , Y  b)
     {
     cout<<"\nsum= "<<a+b;
     }
void sum(char *a ,char *b)
     {
     char c[40];
     strcpy(c,a);
     strcat(c," ");
     strcat(c,b);
     cout<<"\nsum="<<c;
     }
class complex
  {
   int x, y;
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
     complex operator +( complex c)
      {
       complex t;
       t.x=x+c.x;
       t.y=y+c.y;
       return t;
      }
    friend ostream& operator<<(ostream &,complex &);
  };
ostream& operator << (ostream &fout , complex &c)
  {
  if(c.y<0)
    fout<<"\n"<<c.x<<c.y<<"j";
  else
    fout<<"\n"<<c.x<<"+"<<c.y<<"j";
  return fout;
  }
void main()
    {
    int x=12 ,y=5;
    float f1=23.5 ,f2=8.9;
    clrscr();
    sum(x,y);//calling generic fn
    sum(f1,f2);//calling generic fn
    sum(x,f2);//calling generic fn
    sum(f1,y);//calling generic fn
    char s1[20]="Hello",s2[20]="My India";
    sum(s1,s2);//caling overloaded fn
    complex c1,c2;
    c1.get();
    c2.get();
    sum(c1,c2);//calling generic fn
    getch();
    }