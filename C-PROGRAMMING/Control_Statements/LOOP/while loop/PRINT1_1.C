//WAP to print Counting from 1 to 100
#include<stdio.h>
#include<conio.h>
void main()
{
  int i=1; //initialization of loop variable
  clrscr();
  while(i<=100) //condition of loop variable
  {
	 printf(" %d",i);
	 i++;   //increment of loop variable
  }
  getch();
}