//WAP to get the value of DDA and print it 
#include<iostream.h>
#include<conio.h>
void main()
  {
  int x[3][4];
  clrscr();
  cout<<"\n Enter of matrix:";
  for(int i=0;i<3;i++)
   {
   for(int j=0;j<4;j++)
    cin>>x[i][j];
   }
  for(i=0;i<3;i++)
   {
   for(int j=0;j<4;j++)
     cout<<" "<<x[i][j];
   cout<<"\n";
   }
  getch();
  }
