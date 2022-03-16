//WAP to get values of DD string with Pointer
#include<stdio.h>
#include<conio.h>
void main()
     {
     char list[10][20] ;
     char (*p)[20];
     int i;
     clrscr();
     printf("\n Enter 10 Names ");
     for( i=0 ; i<10 ; i++ )
	  gets( *(p+i) );
	  for( i=0 ; i<10 ; i++ )
	  puts( *(p+i) );
     getch();
     }
