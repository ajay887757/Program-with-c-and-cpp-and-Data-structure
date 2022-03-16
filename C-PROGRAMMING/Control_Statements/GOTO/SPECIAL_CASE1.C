//Special Case 1 : goto with if
#include<stdio.h>
#include<conio.h>
void main()
{
  int x=10;
  clrscr();
  goto aa; //shift control from one statement to another statement
  if(x<10)
  {
	 aa://uncontrolled level
	 printf("hello");
  }
  getch();
}
//output hello(wrong output)
