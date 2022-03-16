//WAP to Find Biggest Element in given 3 Elements
#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr()
  printf("\nEnter three number:");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b)
  {
	 if(a>c)
		printf(" \nA is big");
	 else
		printf(" \nC is big");
  }
  else
  {
	 if(b>c)
		printf(" \nB is big");
	 else
		printf(" \nC is big");
  }
  getch();
}