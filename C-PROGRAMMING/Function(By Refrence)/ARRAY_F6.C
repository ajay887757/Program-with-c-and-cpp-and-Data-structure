//WAP to sort array using fn using bubble sort
#include<stdio.h>
#include<conio.h>
void main()
    { int x[10] , i ;
      void  bubble(int * , int );
      clrscr();
      printf("\n enter array x :");
      for ( i=0 ; i<10 ; i++ )
	    scanf( "%d" ,&x[i] );
      bubble( x , 10 );
      printf("\n After Sorting ");
      for ( i=0 ; i<10 ; i++ )
	    printf( "  %d" ,x[i] );
      getch();
      }
void bubble(int *p , int n)
       {
       int i ,j , t ;
       for( i=0 ; i<n ; i++)
	 {
	 for ( j=0; j<(n-1)-i;j++)
	     {
	     if ( *(p+j) > *(p+j+1) )
		{
		t= *(p+j) ;
		*(p+j)=*(p+j+1) ;
		*(p+j+1)=t ;
		}
	     }
	 }
       }


