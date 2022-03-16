//WAP to generic function to display different datatype
#include<iostream.h>
#include<conio.h>
template<class X>
void show(X a , X b)
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
    getch();
    //show(x,f2); //error can't pass mix data
    //show(c1,s2);//error can't pass mix data
    //show(s1,f1);//error can't pass mix data
    //show(8.9,'K');//error can't pass mix data
    }