//WAP to Calculate summation of digits, number of digits
//And print number in reverse order
#include<stdio.h>
#include<conio.h>
void main()
{
  int no,sum=0,c=0,r;
  clrscr();
  printf("\nEnter any number:");
  scanf("%d",&no);
  if(no<0)
  {
	 printf("-");
	 no=no*-1;
  }
  while(no>0)
  {
	 r=no%10;
	 printf("%d",r);
	 sum=sum+r;
	 c++;
	 no=no/10;
  }
  printf("\n Sum of digit=%d,count=%d",sum,c);
}