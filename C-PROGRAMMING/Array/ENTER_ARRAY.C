//WAP to scan and print an Array
#include<conio.h>
#include<stdio.h>
void main()
{
  int x[5],i;
  clrscr();
  printf("\nEnte 5 Number:");
  for(i=0;i<5;i++)
	 scanf("%d",&x[i]);
  printf("\nentered number are:");
  for(i=0;i<5;i++)
	 printf("\n%d",x[i]);
  printf("\nReverse array is:");
  for(i=0;i<5;i++)  //reverse printing of array
	 printf("\n%d",x[i]);
  getch();
}