//WAP to inherit number class in binary , octal and hexadecimal class
#include<iostream.h>
#include<conio.h>
class number
    {
    private:
	int no;
    public :
	number()
	   {
	   no=0;
	   }
	number(int a)
	   {
	   no=a;
	   }
	int retno()
	   {
	   return no;
	   }
    };
class binary : number
  {
  public :
      binary(int a):number(a)
	{
	}
      void convert()
	{
	int var,x[16],i=0;
	var=retno();
	while(var>0)
	   {
	   x[i++]=var%2;
	   var/=2;
	   }
	i--;
	cout<<"\n Binary Number = ";
	while(i>=0)
	   cout<<x[i--];
	}
  };
class octal : number
  {
  public :
      octal(int a):number(a)
	{
	}
      void convert()
	{
	int var,x[16],i=0;
	var=retno();
	while(var>0)
	   {
	   x[i++]=var%8;
	   var/=8;
	   }
	i--;
	cout<<"\n Octal Number = ";
	while(i>=0)
	   cout<<x[i--];
	}
  };
class hexa: number
  {
  public :
      hexa(int a):number(a)
	{
	}
      void convert()
	{
	int var,x[16],i=0;
	var=retno();
	while(var>0)
	   {
	   x[i++]=var%16;
	   var/=16;
	   }
	i--;
	cout<<"\n Hexadecimal Number = ";
	while(i>=0)
	   {
	   if(x[i]>9)
	      cout<<(char)(x[i]+87);
	   else
	     cout<<x[i];
	   i--;
	   }
	}
  };
void main()
    {
    int val;
    clrscr();
    cout<<"\n Enter No :";
    cin>>val;
    binary  b1(val);
    octal   o1(val);
    hexa    h1(val);
    b1.convert();
    o1.convert();
    h1.convert();
    getch();
    }