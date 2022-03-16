//WAP to swap two nos using fn ( call by value )
#include<stdio.h>
#include<conio.h>
void main()
    {
    int x, y;
    void swap(int ,int );
    printf("\n Enter x and y ");
    scanf("%d%d", &x, &y);
    swap (x , y);
    printf("\n After Swapping %d    %d " , x, y);
    }

void swap (int a , int b)
     {
     int c;
     c = a ;
     a = b ;
     b = c;
     }
 
          
       
