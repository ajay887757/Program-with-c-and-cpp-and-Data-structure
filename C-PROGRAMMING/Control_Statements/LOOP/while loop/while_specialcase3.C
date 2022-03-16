//special case of while loop
#include<stdio.h>
#include<conio.h>
void main()
{
  int i=1; // initialization of loop variable
  clrscr();
  while(i<=100) //condition of loop variable
  {
	 printf(" %d",i);
	//ignore increment of loop variable
  }
  getch();
}

//result is infinite loop