//WAP to demonstrate of generic array
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
template<class X>
class array
  {
  private:
    X a[10];//generic data member
  public:
    void get()//generic member fn
      {
      for(int i=0;i<10;i++)
	  cin>>a[i];
      }
    void traverse()//generic member fn
      {
      cout<<"\n";
      for(int i=0;i<10;i++)
	  cout<<"  "<<a[i];
      }
    void search(X se)
     {
     for(int i=0;i<10;i++)
	{
	if(se==a[i])
	  {
	  cout<<"\n FOUND and POSITION = "<<i+1;
	  return;
	  }
	}
       cout<<"\n NOT FOUND ";
     }
   void sort()
     {
     int i,j;
     X t,temp[10];
     for(i=0;i<10;i++)
	temp[i]=a[i];
     for(i=0;i<9;i++)
	{
	for(j=i+1;j<10;j++)
	    {
	    if(temp[j]<temp[i])
	      {
	      t=temp[i];
	      temp[i]=temp[j];
	      temp[j]=t;
	      }
	    }
	}
     cout<<"\n Sorted Array Is ";
     for(i=0;i<10;i++)
	cout<<"  "<<temp[i];
     }
  void reverse()
     {
     int i,j;
     X t;
     cout<<"\n Reverse Array Is :";
     for(i=9;i>=0;i--)
	cout<<"  "<<a[i];
     }
  };
void main()
  {
  int choice,val,choice1;
  float f;
  char ch;
  array<int>   a1;
  array<float> a2;
  array<char>  a3;
  clrscr();
  cout<<"\n Enter Integer Array :";
  a1.get();
  cout<<"\n Enter Float Array :";
  a2.get();
  cout<<"\n Enter Char Array :";
  a3.get();
  do
    {
    cout<<"\n 1 Traversing ";
    cout<<"\n 2 Search ";
    cout<<"\n 3 Sort ";
    cout<<"\n 4 Reverse ";
    cout<<"\n 0 Exit ";
    cout<<"\n   Enter Your Choice ";
    cin>>choice;
    switch(choice)
      {
      case 1 : do
	       {
	       cout<<"\n 1 Int Array ";
	       cout<<"\n 2 Float Array ";
	       cout<<"\n 3 Char Array ";
	       cout<<"\n 0 Exit to main menu ";
	       cin>>choice1;
	       switch(choice1)
		 {
		case 1 :a1.traverse();
			break;
		case 2 :a2.traverse();
			break;
		case 3 :a3.traverse();
			break;
		case 0 :break;
		default:cout<<"\n Invalid Choice ";
		 }
		}while(choice1 != 0);
		break;
      case 2 : do
	       {
	       cout<<"\n 1 Int Array ";
	       cout<<"\n 2 Float Array ";
	       cout<<"\n 3 Char Array ";
	       cout<<"\n 0 Exit to main menu ";
	       cin>>choice1;
	       switch(choice1)
		 {
		case 1 :cout<<"\n Enter int value to be search :";
			cin>>val;
			a1.search(val);
			break;
		case 2 :cout<<"\n Enter float value to be search :";
			cin>>f;
			a2.search(f);
			break;
		case 3 :cout<<"\n Enter char value to be search :";
			fflush(stdin);
			cin>>ch;
			a3.search(ch);
		case 0 :break;
		default:cout<<"\n Invalid Choice ";
		}
		}while(choice1 != 0);
		break;
      case 3 : do
	       {
	       cout<<"\n 1 Int Array ";
	       cout<<"\n 2 Float Array ";
	       cout<<"\n 3 Char Array ";
	       cout<<"\n 0 Exit to main menu ";
	       cin>>choice1;
	       switch(choice1)
		 {
		case 1 :a1.sort();
			break;
		case 2 :a2.sort();
			break;
		case 3 :a3.sort();
			break;
		case 0 :break;
		default:cout<<"\n Invalid Choice ";
		 }
		}while(choice1 != 0);
		break;
      case 4 : do
	       {
	       cout<<"\n 1 Int Array ";
	       cout<<"\n 2 Float Array ";
	       cout<<"\n 3 Char Array ";
	       cout<<"\n 0 Exit to main menu ";
	       cin>>choice1;
	       switch(choice1)
		 {
		case 1 :a1.reverse();
			break;
		case 2 :a2.reverse();
			break;
		case 3 :a3.reverse();
			break;
		case 0 :break;
		default:cout<<"\n Invalid Choice ";
		 }
		}while(choice1 != 0);
		break;
      case 0 : break;
      default:cout<<"\n Invalid Choice ";
      }//end o outer switch;
      }while(choice != 0);//end of outer while loop
  getch();
  }
