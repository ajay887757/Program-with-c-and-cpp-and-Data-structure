//WAP to concat two files into another file where source file & target file name given by user :
#include<fstream.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
char ch,tname[20],sname1[20],sname2[20];
cout<<"\n Enter source file name1";
gets(sname1);
cout<<"\n Enter source file name2";
gets(sname2);
ifstream fin1(sname1);
ifstream fin2(sname2);
if( fin1.fail() )
 {
 cout<<"\n first source file not found";
 return;
 }
if( fin2.fail() )
 {
 cout<<"\n second source file not found";
 return;
 }

cout<<"\n Enter target file name or path";
gets(tname);
ofstream fout(tname);
while( !fin1.eof() )
 {
  ch=fin1.get();
  fout.put(ch);
 }
while( !fin2.eof() )
 {
  ch=fin2.get();
  fout.put(ch);
 }
cout<<"\n File concat ";
fout.close();
fin1.close();
fin2.close();
fin1.open(tname);
clrscr();
cout<<"\n Concated File \n";
while( !fin1.eof() )
   {
   ch=fin1.get();
   cout<<ch;
   }
fin1.close();
getch();
}
