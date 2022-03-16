//WAP to return average of elements of Array using fn
#include<stdio.h>
#include<conio.h>
void main()
    {
    int x[10] , i ;
    float  avg(int * , int );
    clrscr();
    printf("\n enter array x :");
    for ( i=0 ; i<10 ; i++ )
	scanf( "%d" ,&x[i] );
    printf("\n Average = %f ", avg( x ,10 ) );
    getch();
    }
float  avg (int *p ,int n)
   {
   int i, sum =0 ;
   for( i=0 ; i<n ; i++ )
       sum += *(p+i);
   return (float) sum/n;
   }

      
      
     


        


