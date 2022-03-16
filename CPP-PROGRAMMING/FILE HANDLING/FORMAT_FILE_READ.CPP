//WAP to read formatted file :
#include<fstream.h>
#include<iostream.h>
#include<conio.h>
void main()
{
char iname[20];
int ino;
float price;
ifstream fin("Comp");
clrscr();
if( fin.fail() )
 {
 cout<<"\n File not found";
 return;
  }
while(fin>>ino>>iname>>price)
  cout<<"\n"<<ino<<"  "<<iname<<"  "<<price;
fin.close();
getch();
}
