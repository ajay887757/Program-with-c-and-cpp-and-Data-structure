//WAP to create dynamic single dimensional array 
#include<iostream.h>
#include<conio.h>
void main()
  {
  int *p, n, i;
  clrscr();
  cout<<"\n Enter the no. of elements";
  cin>>n;
  p=new int[n];
  cout<<"\n Enter"<<n<<"element";
  for(i=0;i<n;i++)
    cin>>p[i];
  for(i=0;i<n;i++)
    cout<<" "<<p[i];
  delete []p;
  getch();
  }
