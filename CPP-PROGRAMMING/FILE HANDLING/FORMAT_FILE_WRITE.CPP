//WAP to creat formatted file :
#include<fstream.h>
#include<iostream.h>
#include<conio.h>
void main()
{
char iname[20];
int ino,n,i;
float price;
ofstream fout("Comp");
clrscr();
cout<<"\n How many records do you want to enter";
cin>>n;
for(i=1;i<=n;i++)
 {
 cout<<"\n Enter ino,iname & price  :";
 cin>>ino>>iname>>price;
 fout<<"\n"<<ino<<"  "<<iname<<"  "<<price; //space must between values
 }
fout.close();
cout<<"\n File Created ";
getch();
}
