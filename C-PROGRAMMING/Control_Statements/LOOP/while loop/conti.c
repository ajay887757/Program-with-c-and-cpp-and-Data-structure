//WAP to use "continue"
#include<stdio.h>
#include<conio.h>
void main()
{
  int i=0;
  while(i<5)
  {
	 if(i==2)
	 {
		i++;
		continue;
	 }
	 printf("  %d",i);
	 i++;
  }
  getch();
}
