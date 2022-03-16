//WAP to insert an element in array of 10 elements
#include<stdio.h>
#include<conio.h>
void  main()
{
  int x[10],i,pos;
  clrscr();
  printf("\nEnter 9 number:");
  for(i=0;i<9;i++)
	 scanf("%d",&x[i]);
  printf("\n enter position");
  scanf("%d",&pos);
  if(pos<1||pos>10)
  {
	 printf("invalid position");
	 return;
  }
  for(i=8 ;i>=pos-1;i--)
	 x[i+1]=x[i];
  printf("enter new value");
  scanf("%d",&x[pos-1]);
  printf("\nAfter Insertion Array is: ");
  for(i=0;i<10;i++)
	 printf(" %d",x[i]);
  getch();
}
