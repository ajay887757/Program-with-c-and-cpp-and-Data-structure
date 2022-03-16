//WAP to demonstrate moving of LIFT
#include<iostream.h>
#include<conio.h>
#include<dos.h>
class lift
  {
  int cf,tf;
  public:
   void set()
     {
     cf=0;
     }
   void move()
     {
     int i;
     AA:
     cout<<"\n Enter Target Floor ";
     cin>>tf;
     if(tf<0 || tf>10)
       {
       cout<<"\n Invalid Floor ";
       goto AA;
       }
     if(tf<cf)
       {
       while(cf>=tf)
	  {
	  cout<<"  "<<cf;
	  cf--;
	  delay(800);
	  }
       cf++;
       }
     else
       {
	while(cf<=tf)
	  {
	  cout<<"  "<<cf;
	  cf++;
	  delay(1000);
	  }
       cf--;
       }
      }
  };
void main()
  {
  lift l1;
  char ch;
  do
   {
   l1.move();
   cout<<"\n Press any key to continue (enter Esp to exit )...";
   }while( (ch=getch()) != 27);
 }