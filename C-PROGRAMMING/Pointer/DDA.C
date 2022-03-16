//WAP to get the value of DDA with Pointer
#include<stdio.h>
#include<conio.h>
void main()
     {
     int x[3][4],i,j ;
     int (*p)[4];
     p=x;
     clrscr();
     printf("\n Enter Matrix  x :");
     for( i =0; i<3 ; i++)
	{
	for (j=0 ; j<4 ; j++)
	    {
	    scanf("%d",(*(p+i)+j) );
	    }
	}
     for( i =0; i<3 ; i++)
	{
	for (j=0 ; j<4 ; j++)
	    {
	    printf("  %d",*(*(p+i)+j) );
	    }
	printf("\n");
	}
     getch();
     }




