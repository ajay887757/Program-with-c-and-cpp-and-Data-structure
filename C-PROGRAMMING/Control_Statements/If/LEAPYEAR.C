//Program to Check Entered Year is Leap Year or not
#include<stdio.h>
#include<conio.h>
void main()
{
  int year;
  clrscr();
  printf("enter a Year");
  scanf("%d",&year);
  if("year%100==0")
  {
	 if(year%400==0)
		printf("year is a leap year");
	 else
		printf("year is not a leap year");
  }
  else
  {
	 if(year%4==0)
		printf("year is a leap year");
	 else
		printf("year is not a leap year");
  }
  getch();
}
