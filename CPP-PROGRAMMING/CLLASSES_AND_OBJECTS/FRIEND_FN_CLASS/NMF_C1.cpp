//WAP to grand friendship to non member fn
#include<iostream.h>
#include<string.h>
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
	cout<<"\n RNO "<<rno<<"  RNAME= "<<rname<<"  PRICE="<<price;
      }
     friend void modify(record &);//granting friendship
  };
void modify(record &r)//definition of non mem friend fn
  {
   r.show();
   r.rno=205;
   strcpy(r.rname,"KB");
   r.price=880;
   r.show();
  }
void main()
  {
   record r1;
   cout<<"\n Enter Value of r1 object ";
   r1.get();
   modify(r1);//calling non member friend fn
   r1.show();
  }
