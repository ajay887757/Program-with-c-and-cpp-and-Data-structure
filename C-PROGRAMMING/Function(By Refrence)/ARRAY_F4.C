//WAP to sort array using fn using selection sort
#include<stdio.h>
#include<conio.h>
void main()
    { int x[10] , i ;
      void  selection(int * , int );
      clrscr();
      printf("\n enter array x :");
      for ( i=0 ; i<10 ; i++ )
	    scanf( "%d" ,&x[i] );
      selection( x , 10 );
      printf("\n After Sorting ");
      for ( i=0 ; i<10 ; i++ )
	    printf( "  %d" ,x[i] );
      getch();
      }
void selection(int *p , int n)
       {
       int i ,j , t ;
       for( i=0 ; i<n-1 ; i++)
	 {
	 for ( j=i+1; j<n ;j++)
	     {
	     if ( *(p+j) < *(p+i) )
		{
		t= *(p+i) ;
		*(p+i)=*(p+j) ;
		*(p+j)=t ;
		}
	     }
	 }
       }


