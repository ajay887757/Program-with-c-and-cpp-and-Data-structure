//WAP to generic function to display different(mix) datatype
#include<iostream.h>
#include<conio.h>
template<class X,class Y>
void show(X a , Y  b)
     {
     cout<<"\n"<<a<<"  "<<b;
     }
void main()
    {
    int x=12 ,y=5;
    float f1=23.5 ,f2=8.9;
    char c1='T' ,c2='M';
    clrscr();
    show(x,y);
    show(f1,f2);
    show(c1,c2);
    char s1[20]="Hello",s2[20]="My India";
    show(s1,s2);
    show(x,f2);
    show(c1,s2);
    show(s1,f1);
    show(8.9,'K');
    getch();
    }