//WAP to open text file and count no of alpha , no of digit char ,
//    no of punctuation char and no of spaces
#include<fstream.h>
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
void main()
{
char ch,fname[20];
int noa=0,nod=0,nop=0,nos=0;
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
  if(isalpha(ch))
     noa++;
  else if(isdigit(ch))
     nod=0;
  else if(ispunct(ch))
     nop++;
  else if(isspace(ch))
     nos++;
  }
cout<<"\n NO Of Alphabetes      "<<noa;
cout<<"\n NO Of Digit Char      "<<nod;
cout<<"\n NO Of Puncuation char "<<nop;
cout<<"\n NO Of spaces          "<<nos;
fin.close();
getch();
}
