//Nested For
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=0;i<3;i++)
	{
	 printf("\n i start");
	  for(j=0;j<4;j++)
		 printf("\n%d   %d",i,j);
	 printf("\n i end");
	}
   getch();
}