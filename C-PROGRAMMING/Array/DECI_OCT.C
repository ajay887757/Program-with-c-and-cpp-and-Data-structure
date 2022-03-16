//WAP to Convert an Integer into Octal
#include<stdio.h>
#include<conio.h>
void main()
{
  int x[6],no,i=0;
  clrscr();
  printf("enter any no");
  scanf("%d",&no);
  while(no>0)
  {
	 x[i++]=no%8;
	 no/=8;
  }
  i--;
  printf("\n octal no is:");
  for( ;i>=0;i--)
	 printf(" %d",x[i]);
  getch();
}