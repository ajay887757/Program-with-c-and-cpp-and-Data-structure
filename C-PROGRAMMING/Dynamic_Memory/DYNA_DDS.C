//WAP to Create Dynamic DDS
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
  int row,i;
  char (*p)[20];
  clrscr();
  printf("\n enter no of rows");
  scanf("%d",&row);
  p=(char (*)[20])malloc(row*20*sizeof(char));
  printf("enter %d names",row);
  for(i=0;i<row;i++)
	 gets(*(p+i));
  printf("Entered Names Are:\n");
  for(i=0;i<row;i++)
	 puts(*(p+i));
  free(p);
  getch();
}