//WAP to display the contents of any text file,where file name is given by user :
#include<fstream.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
char ch,fname[20];
clrscr();
cout<<"\n Enter file name or path  :";
gets(fname);		// I/P :matrix.cpp
ifstream fin(fname);
if(fin.fail())
 {
 cout<<"\n File not found";
 return;
  }
while( !fin.eof() )
 {
  ch=fin.get();
  cout<<ch;
 }
fin.close();
getch();
}
