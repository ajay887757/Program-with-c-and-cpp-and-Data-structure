//WAP to create dynamic single dimensional string 
#include<iostream.h>
#include<conio.h>
void main()
  {
  char *p;
  int len;
  clrscr();
  cout<<"n Enter length of string ";
  cin>>len;
  p=new char [len];
  cout<<"\n Enter string";
  cin>>p;//  OR puts(p);
  delete p;
  getch();
  }
