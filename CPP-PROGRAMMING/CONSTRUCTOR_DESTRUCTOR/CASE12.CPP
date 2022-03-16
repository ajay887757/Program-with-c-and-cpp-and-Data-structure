//WAP to demonstrate initialization of array of objects
#include<iostream.h>
#include<conio.h>
class demo
  {
  int x,y;
  public:
    demo ()
      {
      x=0 ;y=0;
      }
    demo (int a)
      {
      x=a;y=10;
      }
    demo (int a, int b)
      {
      x=a; y=b;
      }
    void show()
      {
      cout<<"\n X="<<x<<"  Y="<<y;
      }
  };
void main()
  {
  demo d1(5);//or demo d1=demo (5); or demo d1=5;
  demo A[3];
  demo B[3]={demo(5),demo (1),demo (12)};// demo B[3]={5,1,12};
  demo C[3]={demo (7,1),demo (2,9),demo (8,3)};
  demo D[3]={demo(),demo(7),demo(1,2)};
  clrscr();
  cout<<"\n Values Of All Objects ";
  d1.show();
  cout<<"\n Values Of Array  'A' ";
  for(int i=0;i<3;i++)
      A[i].show();
  cout<<"\n Values Of Array  'B' ";
  for(i=0;i<3;i++)
      B[i].show();
  cout<<"\n Values Of Array  'C' ";
  for(i=0;i<3;i++)
      C[i].show();
  cout<<"\n Values Of Array  'D' ";
  for(i=0;i<3;i++)
      D[i].show();
  getch();
  }