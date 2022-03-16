//Special Case 2 : goto with for Loop
#include<stdio.h>
#include<conio.h>
void main()
{
  int i;
  clrscr();
  goto aa; //shift control from one statement to another statement
  for(i=0;i<10;i++)
  {
	 aa://uncontrolled level
	 printf("%d",i);
  }
  getch();
}
//output =garvage valve
