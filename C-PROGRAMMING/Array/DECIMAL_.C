//WAP to Convert an Integer into Binary
#include<stdio.h>
#include<conio.h>
void main()
{
  int x[16],no,i=0;
  clrscr();
  printf("enter any no");
  scanf("%d",&no);
  while(no>0)
  {
	 x[i++]=no%2;
	 no/=2;
  }
  i--;
  printf("\n binary no is is:");
  for( ;i>=0;i--)
	 printf(" %d",x[i]);
  getch();
}