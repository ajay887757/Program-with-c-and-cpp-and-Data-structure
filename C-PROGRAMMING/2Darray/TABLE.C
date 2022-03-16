//WAP to Store Multiplication Table of three Consicutive Number
#include<stdio.h>
#include<conio.h>
void main()
{
  int x[3][10],no,i,j;
  clrscr();
  printf("enter any no");
  scanf("%d",&no);
  for(i=0;i<3;i++)
  {
	 for(j=0;j<10;j++)
	 {
		x[i][j]=no*(j+1);
	 }
	 no++;
  }
  for(i=0;i<3;i++)
  {
	 for(j=0;j<10;j++)
	 {
		printf(" %d",x[i][j]);
	 }
	 printf("\n");
  }
  getch();
}
