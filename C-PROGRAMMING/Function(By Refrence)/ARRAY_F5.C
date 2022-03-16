//WAP to search a element using fn and linear search method
#include<stdio.h>
#include<conio.h>
void main()
    {
    int x[10] , i ,pos,se;
    int linear(int * , int , int  );
    clrscr();
    printf("\n enter array x :");
    for ( i=0 ; i<10 ; i++ )
	scanf( "%d" ,&x[i] );
    printf("\n Enter searching ele :");
    scanf("%d",&se);
    pos =linear( x,10, se);
    if(pos == 0)
       printf("\n Not found ");
    else
       printf("\n found  and position=%d", pos );
    getch();
    }
int linear(int *p ,int n , int s)
    {
    int i ;
    for ( i=0; i<n; i++)
	{
	if( s== *(p+i) )
	  return i+1;
	}
    return 0 ;
    }

