//WAP to Enter 10 numbers using loop and find biggest three no. and their position
#include<stdio.h>
#include<conio.h>
void main()
{
  int no,b1=-32768,b2=-32768,b3=-32768;
  int i=1,p1,p2,p3;
  clrscr();
  while(i<=10)
  {
	 printf("\nEnter %d number:",i);
	 scanf("%d",&no);
	 if(no>b1)
	 {
		b3=b2;
		b2=b1;
		b1=no;
		p3=p2;
		p2=p1;
		p1=i;
	 }
	 else if(no>b2)
	 {
		b3=b2;
		b2=no;
		p3=p2;
		p2=i;
	 }
	 else if(no>b3)
	 {
		b3=no;
		p3=i;
	 }
	 i++;
  }
  printf("\nIst Biggest no=%d and position =%d",b1,p1);
  printf("\n IInd Biggest no=%d and position =%d",b2,p2);
  printf("\n IIIrd Biggest no=%d and position =%d",b3,p3);
  getch();
}