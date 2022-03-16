//WAP to print an Integer into Words
#include<stdio.h>
#include<conio.h>
void main()
{
 int no,no1=0,r,x=0;
 clrscr();
 printf("\nEnter any number:");
 scanf("%d",&no);
 while(no%10==0)
 {
 x++;
 no=no/10;
 }
 while(no>0)
 {
  r=no%10;
  no1=no1*10+r;
  no=no/10;
  }
  while(no1>0)
  {
  r=no1%10;
  if(r==1)
  printf(" one");
  else if(r==2)
  printf(" two");
  else if(r==3)
  printf(" three");
  else if(r==4)
  printf(" four");
  else if(r==5)
  printf(" five");
  else if(r==6)
  printf(" six");
  else if(r==7)
  printf(" seven");
  else if(r==8)
  printf(" eight");
  else if(r==9)
  printf(" nine");
  else if(r==0)
  printf(" zero");
  no1=no1/10;
  }
  while(x>0)
  {
  printf(" zero");
  x--;
  }
  }