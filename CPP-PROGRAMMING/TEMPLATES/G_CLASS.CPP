//WAP to demonstrate of generic class
#include<iostream.h>
#include<conio.h>
template<class X>
class gen
  {
  private:
    X var;//generic data member
  public:
    void get()//generic member fn
      {
      cin>>var;
      }
    void show()//generic member fn
      {
      cout<<"\n"<<var;
      }
  };
void main()
  {
  clrscr();
  //cout<<sizeof(gen);
  gen<int>   g1;
  gen<float> g2;
  gen<char>  g3;
  clrscr();
  cout<<"\n Enter Integer Value :";
  g1.get();
  cout<<"\n Enter Float Value :";
  g2.get();
  cout<<"\n Enter Char Value :";
  g3.get();
  g1.show();
  g2.show();
  g3.show();
  getch();
  }
