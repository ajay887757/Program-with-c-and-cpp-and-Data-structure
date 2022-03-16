//WAP to swap two objects 
#include<iostream.h>
class complex
  {
  private:
    int x,y;
  public:
    void get()
      {
      cout<<"\n Enter x and y:";
      cin>>x>>y;
      }
    void show()
      {
      if (y<0)
	cout<<"\n"<<x<<y<<"j";
      else
	cout<<"\n"<<x<<"+"<<y<<"j";
      }
  };
void main()
  {
   complex c1,c2,t;
   cout<<"\nEnter object c1 ";
   c1.get();
   cout<<"\nEnter object c2 ";
   c2.get();
   c1.show();
   c2.show();
   t=c1;
   c1=c2;
   c2=t;
   cout<<"\n after swapping";
   c1.show();
   c2.show();
  }

