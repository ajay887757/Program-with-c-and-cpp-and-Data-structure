//WAP to calculate average of array of array using fn
#include<iostream.h>
#include<conio.h>
void main()
 {
 int x[10];
 float avg(int *,int);
 clrscr();
 cout<<"\n Enter x Array: ";
 for(int i=0;i<10;i++)
   cin>>x[i];
 cout<<"\n Avearge="<<avg(x,10);
 getch();
 }


float avg(int *p,int n)
 {
 int i,sum=0;
 for(i=0;i<n;i++)
   sum=sum+p[i];
 return (float)sum/n;
 }
