//WAP to check a number is Palindrome or not
#include<stdio.h>
#include<conio.h>
void main()
{
  int no,no1=0,r,x;
  clrscr();
  printf("\nEnter any number:");
  scanf("%d",&no);
  x=no;
  while(no>0)
  {
	 r=no%10;
	 no1=no1*10+r;
	 no=no/10;
  }
  if(x==no1)
	 printf("no is palindrome");
  else
	 printf("no is not palindrome");
  getch();
}