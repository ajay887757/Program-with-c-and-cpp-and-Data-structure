//WAP to read integer from a file :
#include<fstream.h>
#include<iostream.h>
#include<conio.h>
void main()
{
int no;
ifstream fin;
fin.open("Num");//through member function
	   // or
//ifstream fin("Num");//through constructor
clrscr();
if( fin.fail() )
 {
 cout<<"\n File not found";
 return;
 }

while(fin>>no )
 {
  cout<<"  "<<no;
 }
fin.close();
getch();
}
