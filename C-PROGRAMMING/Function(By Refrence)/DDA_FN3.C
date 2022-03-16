//WAP to calculate multiplication of two matrix using function
#include<stdio.h>
#include<conio.h>
void main()
     {
     int x[3][3],y[3][3],z[3][3] ,i,j ;
     void multi( int (*)[3], int (*)[3], int (*)[3] );
     clrscr();
     printf("\n Enter values of Matrix  x and y :");
     for(i=0;i<3;i++)
	{
	for (j=0;j<3;j++)
	    scanf ("%d%d",&x[i][j] ,&y[i][j] );
	}
     multi(x, y, z);
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
void multi( int (*p)[3], int (*q)[3], int (*r)[3] )
     {
     int i,j,k;
     for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	   {
	   for(k=0;k<3;k++)
	       *(*(r+i)+j) += *(*(p+i)+k) * *(*(q+k)+j);
		      //or
	   //r[i][j] += p[i][k] * q[k][j];
	   }
	}
     }



          
