//WAP to Calculate Factorial of an Integer and print it like:
//5*4*3*2*1=120
#include<stdio.h>
#include<conio.h>
void main()
{
  int no;
  long int f=1;
  clrscr();
  printf("enter any no");
  scanf("%d",&no);
  printf("\n factorial no  ");
  while(no>0)
  {
	 printf("%d",no);
	 if(no>1)
		printf("*");
	 f*=no--;//or f*=no--;
  }
  printf("=%ld",f);
  getch();
}