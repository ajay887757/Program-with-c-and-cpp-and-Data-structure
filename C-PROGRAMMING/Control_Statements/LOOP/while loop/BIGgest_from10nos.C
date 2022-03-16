//WAP to enter 10 numbers using loop and find Biggest no. and its Position
#include<stdio.h>
#include<conio.h>
void main()
{
  int no,big=-32768;
  int i=1,pos=0;
  clrscr();
  while(i<=10)
  {
	 printf("\nEnter %d number:",i);
	 scanf("%d",&no);
	 if(no>big)
	 {
		big=no;
		pos=i;
	 }
	 i++;
  }
  printf("\nBiggest no=%d and position =%d",big,pos);
  getch();
}