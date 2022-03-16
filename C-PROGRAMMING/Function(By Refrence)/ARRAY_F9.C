//WAP to revarse the Array using fn
#include<stdio.h>
#include<conio.h>
void main()
    {
    int x[10] , i ;
    void  reverse(int * , int );
    clrscr();
    printf("\n enter array x :");
    for ( i=0 ; i<10 ; i++ )
	scanf( "%d" ,&x[i] );
    reverse(x,10);
    printf("\n reverse array x :");
    for ( i=0 ; i<10 ; i++ )
	scanf( "%d" ,x[i] );
    getch();
    }
void  reverse(int *p ,int n)
     {
     int i,j,t;
     for( i=0,j=n-1 ; j>i ; i++,j-- )
	{
	 t=*(p+i);
	 *(p+i)=*(p+j);
	 *(p+j)=t;
       }
     }

      
      
     


        


