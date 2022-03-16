
#include<stdio.h>
#include<conio.h>
void main()
{
  int x[3][3],y[3][3],i,j;
  clrscr();
  printf("enter x array");
  for(i=0;i<3;i++)
  {
	 for(j=0;j<3;j++)
	 {
		scanf("%d",&x[i][j]);
		y[j][i]=x[i][j];
	 }
  }
  printf("x array\n");
  for(i=0;i<3;i++)
  {
	 for(j=0;j<3;j++)
		printf("  %d",x[i][j]);
	 printf(" \n");
  }
  printf("\n transpose of x\n");
  for(i=0;i<3;i++)
  {
	 for(j=0;j<3;j++)
		printf("  %d",y[i][j]);
	 printf(" \n");
  }
  getch();
}
