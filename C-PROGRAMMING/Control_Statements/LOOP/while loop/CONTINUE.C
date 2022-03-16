//WAP to use of "continue"
#include<stdio.h>
#include<conio.h>
void main()
{
  int x,y,s;
  int i=0;
  clrscr();
  while(i<3)
  {
	 printf("\nEnter two no:");
	 scanf("%d%d",&x,&y);
	 if(y==0)
	 {
		printf("\nsecond oprand of / can't be zero...");
		continue;
	 }
	 s=x/y;
	 printf("Div=%d",s);
	 i++;
  }
  getch();
}
