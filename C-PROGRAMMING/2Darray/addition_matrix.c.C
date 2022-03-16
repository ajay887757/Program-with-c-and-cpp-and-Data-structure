//WAP Calculate Summation of Two Matrices
#include<stdio.h>
#include<conio.h>
void main()
{
  int x[3][4],y[3][4],z[3][4],i,j;
  clrscr();
  printf("enter x and y array");
  for(i=0;i<3;i++)
  {
	 for(j=0;j<4;j++)
	 {
		 scanf("%d%d",&x[i][j],&y[i][j]);
		 z[i][j]=x[i][j]+y[i][j];
	 }
  }
  printf("\n   X 		         Y  	         	Z\n");
  for(i=0;i<3;i++)
  {
	 for(j=0;j<4;j++)
		printf("  %d",x[i][j]);
		printf("      ");
	 for(j=0;j<4;j++)
		printf("  %d",y[i][j]);
		printf("      ");
	 for(j=0;j<4;j++)
		printf("  %d",z[i][j]);
	 printf("\n");
  }
  getch();
}
