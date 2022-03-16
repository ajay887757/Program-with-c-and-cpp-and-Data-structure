//WAP to Calculate Summation of each row and each column of a Matrix of order 3X4
#include<stdio.h>
#include<conio.h>
void main()
{
  int x[3][4],sumr[3]={0},sumc[4]={0},i,j;
  clrscr();
  printf("enter x array");
  for(i=0;i<3;i++)
  {
	 for(j=0;j<4;j++)
	 {
		 scanf("%d",&x[i][j]);
		 sumr[i]=sumr[i]+x[i][j];
	 }
  }
  for(j=0;j<4;j++)
  {
	 for(i=0;i<3;i++)
	 {
		sumc[j]=sumc[j]+x[i][j];
	 }
  }
  for(i=0;i<3;i++)
  {
	 for(j=0;j<4;j++)
	 {
		printf("  %d",x[i][j]);
	 }
	 printf("  %d",sumr[i]);
	 printf("\n");
  }
  for(j=0;j<4;j++)
	 printf("  %d",sumc[j]);
  getch();
}
