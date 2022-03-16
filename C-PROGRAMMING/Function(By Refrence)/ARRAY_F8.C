//WAP to return biggest elements of Array using fn
#include<stdio.h>
#include<conio.h>
void main()
    {
    int x[10] , i ;
    int  biggest(int * , int );
    clrscr();
    printf("\n enter array x :");
    for ( i=0 ; i<10 ; i++ )
	scanf( "%d" ,&x[i] );
    printf("\n Biggest Element = %f ", biggest( x ,10 ) );
    getch();
    }
int  biggest (int *p ,int n)
   {
   int i, big =-32768 ;
   for( i=0 ; i<n ; i++ )
       {
       if(*(p+i)>big)
	  big= *(p+i);
       }
   return big;
   }

      
      
     


        


