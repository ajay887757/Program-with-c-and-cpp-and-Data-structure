//WAP to calculate sum of diagonal ele , sum of upper tri and sum of lower tri using fn
#include<stdio.h>
#include<conio.h>
void main()
     {
     int x[3][3],i,j;
     void sum_d_u_l( int (*)[3] );
     clrscr();
     printf("\n Enter values of Matrix  x :");
     for(i=0;i<3;i++)
	{
	for (j=0;j<3;j++)
	    scanf ("%d",&x[i][j]);
	}
      for(i=0;i<3;i++)
	{
	for (j=0;j<3;j++)
	    printf ("  %d",x[i][j]);
	printf("\n");
	}
     sum_d_u_l(x);

     getch();
     }
void sum_d_u_l( int (*p)[3] )
     {
     int i,j,sumd=0,sumu=0,suml=0;
     for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	   {
	   if(j>i)
	      sumu+=*(*(p+i)+j);
	   else if(i>j)
	      suml+=*(*(p+i)+j);
	   else
	      sumd+=*(*(p+i)+j);
	   }
	}
     printf("\n sum of upper triangle elements :%d",sumu);
     printf("\n sum of lower triangle elements :%d",suml);
     printf("\n sum of diagonal elements       :%d",sumd);
     }


