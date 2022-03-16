//WAP to generic function to swapping of different datatype
#include<iostream.h>
#include<conio.h>
#include<string.h>
template<class X>
void swap(X &a ,X  &b)
     {
     X c;
     c=a;
     a=b;
     b=c;
     }
void swap(char *a ,char *b)
     {
     char c[20];
     strcpy(c,a);
     strcpy(a,b);
     strcpy(b,c);
     }
class complex
  {
   int x, y;
   public:
     void get()
      {
       cout<<"\n Enter x and y(values of complex):";
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
    int x=12 ,y=5;
    float f1=23.5 ,f2=8.9;
    char c1='T',c2='M';
    char s1[20]="Hello",s2[20]="My India";
    complex o1,o2;
    o1.get();
    o2.get();
    clrscr();
    cout<<"\n *******BEFORE SWAPPING************ ";
    cout<<"\n"<<x<<"  "<<y;
    cout<<"\n"<<f1<<"  "<<f2;
    cout<<"\n"<<c1<<"  "<<c2;
    cout<<"\n"<<s1<<"  "<<s2;
    o1.show();o2.show();

    swap(x,y);//calling generic fn
    swap(f1,f2);//calling generic fn
    swap(c1,c2);//calling generic fn
    swap(s1,s2);//caling overloaded fn
    swap(o1,o2);//calling generic fn
    cout<<"\n *******AFTER SWAPPING************ ";
    cout<<"\n"<<x<<"  "<<y;
    cout<<"\n"<<f1<<"  "<<f2;
    cout<<"\n"<<c1<<"  "<<c2;
    cout<<"\n"<<s1<<"  "<<s2;
    o1.show();o2.show();

    getch();
    }