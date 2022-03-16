//WAP to demonstrate pointer with object
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
  record r1,*p;
  cout<<"\n Enter object r1 ";
  p=&r1;
  //cin>>p->rno>>p->rname>>p->price;//Error
  p->get();
  p->show();
  }
