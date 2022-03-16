//WAP to write n integers in a file :
#include<fstream.h>
#include<iostream.h>
#include<conio.h>
void main()
{
int no,n,i;
ofstream fout;
clrscr();
fout.open("Num");//through member function
     //	Or
//ofstream fout("Num");//through constructor
cout<<"\n How many no.s do you want to enter";
cin>>n;
for(i=1;i<=n;i++)
   {
   cin>>no;
   fout<<no<<"  ";
   }
fout.close();
cout<<"\n INT file created ";
}
