//WAP to use "break"
#include<stdio.h>
#include<conio.h>
void main()
{
  int i=0;
  clrscr();
  while(i<5)
  {
	 printf("  %d",i);
	 if(i==2)
		break;
	 i++;
  }
  printf("\nEnd of main");
  getch();
}
