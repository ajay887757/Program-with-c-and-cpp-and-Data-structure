//WAP to convert lower case file into upper case file :
#include<fstream.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
void main()
{
char ch,sname[20],tname[20];
clrscr();
cout<<"\n Enter File Name Or Path  :";
gets(sname);
ifstream fin(sname);
if(fin.fail())
 {
 cout<<"\n File not found";
 return;
  }
cout<<"\n Enter Target File   :";
gets(tname);
ofstream fout(tname);
while( !fin.eof() )
 {
  ch=fin.get();
  if(islower(ch))
     fout.put(toupper(ch));
  else
     fout.put(ch);
 }
fin.close();
fout.close();
cout<<"\n UPPER CASE FILE \n";
fin.open(tname);
while( !fin.eof() )
 {
  ch=fin.get();
  cout<<ch;
 }
getch();
}
