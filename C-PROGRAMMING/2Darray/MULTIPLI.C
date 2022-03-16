//
#include<stdio.h>
#include<conio.h>
void main()
{
  int x[3][3],y[3][3],z[3][3]={0},k,i,j;
  clrscr();
  printf("enter x and y array");
  for(i=0;i<3;i++)
  {
	 for(j=0;j<3;j++)
	 {
		scanf("%d%d",&x[i][j],&y[i][j]);
	 }
  }
  for(i=0;i<3;i++)
  {
	 for(j=0;j<3;j++)
	 {
		for(k=0;k<3;k++)
		{
		  z[i][j]+=x[i][k]*y[k][j];
		}
	 }
  }
  printf("\n   X 		   Y  	           Z\n");
  for(i=0;i<3;i++)
  {
	 for(j=0;j<3;j++)
		printf("  %d",x[i][j]);
		printf("      ");
	 for(j=0;j<3;j++)
		printf("  %d",y[i][j]);
		printf("      ");
	 for(j=0;j<3;j++)
		printf("  %d",z[i][j]);
	 printf("\n");
  }
  getch();
}
