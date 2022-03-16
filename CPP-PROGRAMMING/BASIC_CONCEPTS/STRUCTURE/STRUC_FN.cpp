//WAP to pass structure var into function
#include<iostream.h>
#include<conio.h>
struct student
   {
    int sno,m;
    char sname[20];
    float per;
   };
void main()
   {
    student s1,s2;
    void swap(student &,student &);
    clrscr();
    cout<<"\n Enter sno,m,sname of s1:";
    cin>>s1.sno>>s1.m>>s1.sname;
    s1.per=s1.m/3.0;
    cout<<"\n Enter sno,m,sname of s2:";
    cin>>s2.sno>>s2.m>>s2.sname;
    s2.per=s2.m/3.0;
    swap(s1,s2);
    cout<<"\n After swapping";
    cout<<"\n SNO="<<s1.sno<<" SNAME="<<s1.sname<<" MARKS="<<s1.m<<" PERCENTAGE="<<s1.per;
    cout<<"\n SNO="<<s2.sno<<" SNAME="<<s2.sname<<" MARKS="<<s2.m<<" PERCENTAGE="<<s2.per;
    getch();
   }
void swap(student &a,student &b)
   {
    student c;
    c=a;
    a=b;
    b=c;
   }
