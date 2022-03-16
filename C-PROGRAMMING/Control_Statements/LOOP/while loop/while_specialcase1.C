//special case of while loop
#include<stdio.h>
#include<conio.h>
void main()
{
  int i=1; // initialization of loop variable
  clrscr();
  while(i<=100); //semi colon after condition of loop variable
  {
	 printf(" %d",i);
	 i++;   // increment of loop variable
  }
  getch();
}
//result is infinite loop