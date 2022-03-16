//WAP to check a matrix is Symmetric or not
#include<stdio.h>
#include<conio.h>
void main()
{
  int x[3][3]i,j;
  clrscr();
  printf("enter x array");
  for(i=0;i<3;i++)
  {
	 for(j=0;j<3;j++)
	 {
		scanf("%d",&x[i][j]);
	 }
  }
  for(i=0;i<3;i++)
  {
	 for(j=0;j<3;j++)
	 {
		if(x[i][j]!=y[i][j])
		{
		  printf("matrix is not symmetric");
		  break;
		}
	 }
  }
  if(i==3&&j==3)
	 printf("\n matrix is  symmetric");
  getch();
}
