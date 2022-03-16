//WAP to calculate addition of two matrix using function
#include<stdio.h>
#include<conio.h>
void main()
     {
     int x[3][3],y[3][3],z[3][3] ,i,j ;
     void sum( int (*)[3], int (*)[3], int (*)[3] );
     clrscr();
     printf("\n Enter values of Matrix  x and y :");
     for(i=0;i<3;i++)
	{
	for (j=0;j<3;j++)
	    scanf ("%d%d",&x[i][j] ,&y[i][j] );
	}
     sum(x, y, z);
     for(i=0;i<3;i++)
	{
	for (j=0;j<3;j++)
	    printf("   %d",x[i][j]);
	for (j=0;j<3;j++)
	    printf("   %d",y[i][j]);
	printf("     ");
	for (j=0;j<3;j++)
	    printf("   %d",z[i][j]);
	printf("\n");
	}
     getch();
     }
void sum( int (*p)[3], int (*q)[3], int (*r)[3] )
     {
     int i,j;
     for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	   *(*(r+i)+j) = *(*(p+i)+j) + *(*(q+i)+j);
		      //or
	   //r[i][j] = p[i][j] + q[i][j];
	}
     }



          
