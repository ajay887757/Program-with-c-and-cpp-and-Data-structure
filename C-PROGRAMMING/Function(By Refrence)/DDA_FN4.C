//WAP to Check Matrix is symetric or not
#include<stdio.h>
#include<conio.h>
void main()
     {
     int x[3][3],y[3][3],i,j,var ;
     int symet( int (*)[3], int (*)[3]);
     clrscr();
     printf("\n Enter values of Matrix  x :");
     for(i=0;i<3;i++)
	{
	for (j=0;j<3;j++)
	    scanf ("%d",&x[i][j]);
	}

     var=symet(x,y);
     for(i=0;i<3;i++)
	{
	for (j=0;j<3;j++)
	    printf("   %d",x[i][j]);
	printf("     ");
	for (j=0;j<3;j++)
	    printf("   %d",y[i][j]);
	printf("\n");
	}
     if(var==1)
       printf("\n Symetric ");
     else
       printf("\n NonSymetric ");
     getch();
     }
int symet( int (*p)[3], int (*q)[3])
     {
     int i,j;
     for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	   *(*(q+j)+i) = *(*(p+i)+j);
		      //or
	   //q[j][i] = p[i][j];
	}

     for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	   {
	   if( *(*(p+i)+j) != *(*(q+i)+j) )
	      return 0;
	   }
	}
     return 1;
     }


