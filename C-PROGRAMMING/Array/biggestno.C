//WAP to Calculate Average of Array of 10 Elements
#include<stdio.h>
#include<conio.h>
void main()
{
  int x[10],i,sum=0;
  clrscr();
  printf("\nEnte 10 Number:");
  for(i=0;i<10;i++)
	 scanf("%d",&x[i]);
  for(i=0;i<10;i++)
  {
	 sum=sum+x[i];
  }
  printf("\navg of 10 nos=%f",sum/10.0);
  getch();
}