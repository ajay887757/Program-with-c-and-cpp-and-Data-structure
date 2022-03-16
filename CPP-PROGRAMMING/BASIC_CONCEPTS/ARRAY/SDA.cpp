#WAP a program to get the value of array and print it 
#include<iostream.h>
void main()
 {
 int x[10];
 clrscr();
 cout<<"\n Enter x Array:";
 for(int i=0;i<10;i++)
   cin>>x[i];
 for(i=0;i<10;i++)
   cout<<"   "<<x[i];
 getch();
 }
