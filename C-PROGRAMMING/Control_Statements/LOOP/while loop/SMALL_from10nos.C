//WAP to Enter 10 Number using loop and fing smallest no. and tis position
#include<stdio.h>
#include<conio.h>
void main()
{
  int no,small=32767;
  int i=1,pos=0;
  clrscr();
  while(i<=10)
  {
	 printf("\nEnter %d number:",i);
	 scanf("%d",&no);
	 if(no<small)
	 {
		small=no;
		pos=i;
	 }
	 i++;
  }
  printf("\nBiggest no=%d and position =%d",small,pos);
  getch();
}