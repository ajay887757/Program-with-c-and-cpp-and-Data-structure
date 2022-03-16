//WAP to demonstrate 'dynamic' constructor
#include<iostream.h>
#include<string.h>
#include<conio.h>
class string
  {
  char *p;
  int len;
  public:
    string()
      {
      len=0;
      p=new char[len+1];
      strcpy(p,"");
      }
    string (char *q)
      {
      len=strlen(q);
      p=new char[len+1];
      strcpy(p,q);
      }
    ~string()
     {
     delete []p;
     }
    void show()
     {
     cout<<"\n"<<p;
     }
  };
void main()
  {
  string s1;
  string s2("Hello");// Or string s2="Hello";
  string s3("My India");//or string s3="My India";
  clrscr();
  cout<<sizeof(s1)<<"  "<<sizeof(s2)<<"   "<<sizeof(s3);
  s1.show();
  s2.show();
  s3.show();
  getch();
  }
