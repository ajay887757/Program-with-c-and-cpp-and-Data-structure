//WAP to demonstrate pointer with array of objects 
#include<iostream.h>
class record
  {
  int rno;
  char rname[20];
  float price;
  public:
    void get()
      {
      cout<<"\n Enter rno ,rname , price";
      cin>>rno>>rname>>price;
      }
      void show()
      {
	cout<<"\n RNO="<<rno<<" RNAME="<<rname<<"  PRICE="<<price;
      }
  };
void main()
  {
  record r[10],*p;
  p=r;
  cout<<"\n Enter vAlues of array of objects ";
  for(int i=0;i<10;i++)
    (p+i)->get(); //or p[i].get();
  for(i=0;i<10;i++)
    (p+i)->show();//or p[i].show();
  }
