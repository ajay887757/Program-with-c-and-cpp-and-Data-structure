//WAP to Find Biggest element in Array of 10 elements
#include<stdio.h>
#include<conio.h>
void main()
{
  int x[10],i,b=-32768;
  int big(int,int);
  clrscr();
  printf("\nEnter x array");
  for(i=0;i<10;i++)
	 scanf("%d",&x[i]);
  for(i=0;i<10;i++)
	 b=big(b,x[i]);
  printf("\n biggest no of array=%d",b);
  getch();
}
int big(int a,int b)
{
  if(a>b)
	 return a;
  else
	 return b;
}
