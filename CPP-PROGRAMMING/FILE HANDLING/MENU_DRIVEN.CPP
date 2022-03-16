//MENU DRIVEN PROGRAME ON FILE HANDLING :
#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<conio.h>
class Item
{
  char iname[20];
  int ino;
  float price;
public:
  void get();
  void show();
  void append();
  void traverse();
  void search();
  void insert();
  void Delete();
  void update();
  void sort();

};
 void Item::get()
  {
  cout<<"Enter ino,iname & price :";
  cin>>ino>>iname>>price;
  }
 void Item::show()
  {
  cout<<"\n"<<ino<<"  "<<iname<<" "<<price;
  }
 void Item::append()
  {
  fstream ff;
  ff.open("computer",ios::app);
  ff.write((char*)this,sizeof(Item));
  ff.close();
  }
 void Item::traverse()
  {
  Item t;
  ifstream fin("computer");
  if(fin.fail())
    {
    cout<<"\n File not found";
   return;
   }
  while(!fin.eof())
    {
    fin.read((char*)&t,sizeof(t));
    t.show();
    }
  fin.close();
  }
 void Item::search()
  {
  Item t;
  ifstream fin("computer");
  if(fin.fail())
    {
    cout<<"\n File not found ";
    return;
    }
  int val;
  cout<<"\n Enter searching element ";
  cin>>val;
  while(!fin.eof())
   {
   fin.read((char*)&t,sizeof(t));
   if(t.ino==val)
    {
    cout<<"\n Found ";
    t.show();
    fin.close();
    return;
    }
   }
  cout<<" \n Record not found";
  fin.close();
  }
 void Item::insert()
  {
  Item t,I;
  ifstream fin("computer");
  ofstream fout("temp");
  if(fin.fail())
    {
    cout<<"\n File not found ";
    return;
    }
  int val;
  cout<<"\n Enter no after which you want to insert element ";
  cin>>val;
  while(fin.read((char*)&t,sizeof(t)))
   {
   fout.write((char*)&t,sizeof(t));
   if(t.ino==val)
     {
     cout<<"\n Enter new record ";
     I.get();
     fout.write((char*)&I,sizeof(I));
     }
   }
   fin.close();
   fout.close();
   cout<<"\n Record inserted ";
   remove("computer");
   rename("temp","computer");
   }
 void Item::Delete()
  {
  Item t;
  int flag=0,val;
  ifstream fin("computer");
  ofstream fout("temp");
  if(fin.fail())
   {
   cout<<"\n File not found";
   return;
   }
  cout<<"\n Enter no to be deleted ";
  cin>>val;
  while(fin.read((char*)&t,sizeof(t)))
   {
   if(t.ino!=val)
     {
     fout.write((char*)&t,sizeof(t));
     flag=1;
     }
   }
  if(flag==0)
     cout<<"\n Record not found ";
  fin.close();
  fout.close();
  remove("computer");
  rename("temp","computer");
  }
void Item::update()
  {
  fstream ff("computer",ios::in|ios::out);
  int val,c=0,pos,flag;
  if(ff.fail())
   {
   cout<<"\n File not found ";
   return;
   }
  cout<<"\n Enter ino to be updated ";
  cin>>val;
  Item t;
  while(ff.read((char*)&t,sizeof(t)))
   {
   if(t.ino==val)
     {
     pos=(c*sizeof(t));
     ff.seekp(pos,ios::beg);
     cout<<"\n Enter new price ";
     cin>>t.price;
     ff.write((char*)&t,sizeof(t));
     cout<<" \nRecord updated";
     flag=1;
     }
   c++;
   }
  if(flag==0)
    cout<<"\nRecord not found ";
  ff.close();
  }

 void Item::sort()
  {
  Item *p,t;
  int i=0,j;
  ifstream fin("computer");
  int nor;
  fin.seekg(0,ios::end);
  nor=fin.tellg()/sizeof(Item);
  p=new Item[nor];
  fin.seekg(0,ios::beg);
  while(fin.read((char*)&t,sizeof(t)))
     p[i++]=t;
  for(i=0;i<nor-1;i++)
   {
   for(j=i+1;j<nor;j++)
     {
     if(p[j].price<p[i].price)
       {
       t=p[j];
       p[j]=p[i];
       p[i]=t;
       }
     }
   }
 cout<<"\n Sorted file is ";
 for(i=0;i<nor;i++)
     p[i].show();
 fin.close();
 delete[]p;
 }



void main()
{
Item i1;
int ch;
do
 {
clrscr();
cout<<"\n1 Append";
cout<<"\n2 Traverse";
cout<<"\n3 Search";
cout<<"\n4 Insert";
cout<<"\n5 Delete";
cout<<"\n6 Update";
cout<<"\n7 Sort";
cout<<"\n0 exit";
cout<<"\nEnter your choice";
cin>>ch;
switch(ch)
  {
   case 1: i1.get();
	   i1.append();
	   break;
   case 2: i1.traverse();
	   break;
   case 3: i1.search();
	   break;
   case 4: i1.insert();
	   break;
   case 5: i1.Delete();
	   break;
   case 6: i1.update();
	   break;
   case 7: i1.sort();
	   break;
   case 0: break;
   default : cout<<"\n Invalid Choice ";
   }
 cout<<"\n press any key to continue ...";
 getch();
 }while(ch!=0);
}
// end of file handling
