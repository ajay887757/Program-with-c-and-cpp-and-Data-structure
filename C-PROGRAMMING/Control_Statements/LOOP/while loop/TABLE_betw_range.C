//WAP to print Multiplication table b/w given range
#include<stdio.h>
#include<conio.h>
void main()
{
  int l,u,i=1;
  clrscr();
  printf("\nEnter the range:");
  scanf("%d%d",&l,&u);
  while(l<=u)
  {
	 i=1;
	 while(i<=10)
	 {
		printf(" %-5d",l*i);
		i++;
	 }
	 printf("\n");
	 l++;
  }
  getch();
}