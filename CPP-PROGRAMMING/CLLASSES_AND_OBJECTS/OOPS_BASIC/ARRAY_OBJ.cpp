//WAP to demonstrate of array of objects
#include<iostream.h>
class record
  {
  int rno;
  char rname[20];
  float price;
  public:
    void get()
      {
      cout<<"\n Enter rno,rname,price";
      cin>>rno>>rname>>price;
      }
    void show()
      {
      cout<<"\n RNO="<<rno<<"  RNAME="<<rname<<"  PRICE="<<price;
      }
    void sort(record *p)
      {
      int i,j; record temp;
      for(i=0;i<9;i++)
	{
	for(j=i+1;j<10;j++)
	  {
	  if(p[j].price<p[i].price)
	    {
	    temp=p[i];
	    p[i]=p[j];
	    p[j]=temp;
	    }
	  }
	}
      }
  };
void main()
  {
  record r[10];
  cout<<sizeof(r)<<" "<<sizeof(r[10]);
  for(int i=0;i<10;i++)
    r[i].get();
  for(i=0;i<10;i++)
    r[i].show();
  r[0].sort(r);
  cout<<"\n After sorting";
  for(i=0;i<10;i++)
    r[i].show();
  }
