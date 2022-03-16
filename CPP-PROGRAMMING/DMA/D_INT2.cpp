//WAP to create dynamic single int ( with initilization )
#include<iostream.h>
#include<conio.h>
void main()
  {
   int *p;
   clrscr();
   p=new int(105);
   cout<<"\n"<<*p;
   delete p;
   getch();
  }
