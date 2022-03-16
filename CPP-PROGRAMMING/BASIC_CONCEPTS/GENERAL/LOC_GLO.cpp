//WAP to distinctguish same local and global variable
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
int x=15;
void main()
 {
   clrscr();
   int x=10;
   printf("\n %d %d",x,::x);
   cout<<"\n"<<x<<" "<<::x;
   getch();
 }
