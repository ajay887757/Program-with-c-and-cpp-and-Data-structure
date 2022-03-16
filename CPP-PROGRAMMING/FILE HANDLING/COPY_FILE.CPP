//WAP to copy one file into another file where source file & target file name given by user :
#include<fstream.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
char ch,tname[20],sname[20];
cout<<"\n Enter source file name or path";
gets(sname);
ifstream fin(sname);
if( fin.fail() )
 {
 cout<<"File not found";
 return;
 }
cout<<"Enter target file name or path";
gets(tname);
ofstream fout(tname);
while( !fin.eof() )
 {
  ch=fin.get();
  fout.put(ch);
 }
cout<<"\n File copied";
fin.close();
fout.close();
}
