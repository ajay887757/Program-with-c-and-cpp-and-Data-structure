//WAP to search a element using fn and linear search method
#include<stdio.h>
#include<conio.h>
void main()
    {
    int x[10]={1,5,10,12,20,25,38,90,100,120} ;
    int pos,se;
    int binary(int * , int , int  );
    clrscr();
    printf("\n Enter searching ele :");
    scanf("%d",&se);
    pos =binary( x,10, se);
    if(pos == 0)
       printf("\n Not found ");
    else
       printf("\n found  and position=%d", pos );
    getch();
    }
int binary(int *p ,int n , int s)
    {
    int lb=0,ub=n-1,mb=(n/2);
    while(lb<=ub)
	{
	if( s== *(p+mb) )
	  return mb+1;
	else if( s>*(p+mb) )
	  lb=mb+1;
	else
	  ub=mb-1;
	mb=(lb+ub)/2;
	}
     return 0 ;
    }

