//WAP to check Entered number is Armstrong or not
#include<stdio.h>
#include<conio.h>
void main()
{
  int no,x;
  int arm(int);
  clrscr();
  printf("\nEnter any no");
  scanf("%d",&no);
  if(arm(no))
	 printf("\n no is armstrong");
  else
	 printf("\ n no is not armstrong");
  getch();
}
int arm(int n)
{
  int sum=0,r,x;
  x=n;
  while(n>0)
  {
	 r=n%10;
	 sum=sum+(r*r*r);
	 n/=10;
  }
  if(sum==x)
	 return 1;
  else
	 return 0;
}