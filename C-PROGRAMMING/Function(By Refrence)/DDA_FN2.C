//WAP to calculate transpose of any matrix
#include<stdio.h>
#include<conio.h>
void main()
	  {
	  int x[3][3],y[3][3],i,j ;
	  void trans( int (*)[3], int (*)[3]);
	  clrscr();
	  printf("\n Enter values of Matrix  x :");
	  for(i=0;i<3;i++)
	  {
	  for (j=0;j<3;j++)
		 scanf ("%d",&x[i][j]);
	  }
	  trans(x, y);
	  for(i=0;i<3;i++)
	  {
	  for (j=0;j<3;j++)
		 printf("   %d",x[i][j]);
	  printf("     ");
	  for (j=0;j<3;j++)
		 printf("   %d",y[i][j]);
	  printf("\n");
	  }
	  getch();
	  }
void trans( int (*p)[3], int (*q)[3])
	  {
	  int i,j;
	  for(i=0;i<3;i++)
	  {
	  for(j=0;j<3;j++)
		*(*(q+j)+i) = *(*(p+i)+j);
				//or
		//q[j][i] = p[i][j];
	  }
	  }
