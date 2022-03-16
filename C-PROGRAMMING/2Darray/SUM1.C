//WAP to enter a 3X4 matrix in 4X5 matrix and calculate summation of each
//row in last column and summation of each column in last row and summation
//of whole array in last element
#include<stdio.h>
#include<conio.h>
void main()
{
  int x[4][5]={0},i,j;
  clrscr();
  printf("enter x array");
  for(i=0;i<3;i++)
  {
	 for(j=0;j<4;j++)
	 {
		scanf("%d",&x[i][j]);
		 x[i][4]=x[i][j]+x[i][4];
	 }
	 x[3][4]=x[i][4]+x[3][4];
  }
  for(j=0;j<4;j++)
  {
	 for(i=0;i<3;i++)
		x[3][j]=x[i][j]+x[3][j];
  }
  for(i=0;i<4;i++)
  {
	 for(j=0;j<5;j++)
		printf("  %d",x[i][j]);
	 printf("\n");
  }
  getch();
}
