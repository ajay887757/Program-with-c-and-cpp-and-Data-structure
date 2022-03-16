//WAP to check Entered number is Palindrome or not
#include<stdio.h>
#include<conio.h>
void main()
{
  int no;
  int palin(int);
  clrscr();
  printf("\nEnter any no");
  scanf("%d",&no);
  if(palin(no))
	 printf("\n no is pailndrome");
  else
	 printf("no is not palindrome");
  getch();
}
int palin(int n)
{
  int no1=0,r,x;
  x=n;
  while(n>0)
  {
	 r=n%10;
	 no1=no1*10+r;
	 n/=10;
  }
  if(no1==x)
	 return 1;
  else
	 return 0;
}