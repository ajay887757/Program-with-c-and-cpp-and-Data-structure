//WAP to get structure variable and print it 
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
 clrscr();
 cout<<sizeof(student);
 student s1;
 cout<<"\n Enter sno,sname,m of s1";
 cin>>s1.sno;
 cin>>s1.m;
 cin>>s1.sname;
 s1.per=s1.m/4.0;
 cout<<"\n SNO="<<s1.sno<<" SNAME="<<s1.sname<<" MARKS="<<s1.m<<" PERCENTAGE="<<s1.per;
 getch();
 }
