//WAF to get  the elements of Array using fn
#include<stdio.h>
#include<conio.h>
void main()
    {
    int x[10] , i   ;
    void get(int * , int );//prototype
    clrscr();
    printf("\n enter array x :");
    get(x,10);
    for (i=0 ;i<10 ;i++)
	 printf( "  %d" , x[i] );
    getch();
    }
void get (int *p ,int n)
    {
    int i;
    for( i=0 ; i<n ; i++ )
	 scanf("%d",(p+i) );
    }


      
     


        

