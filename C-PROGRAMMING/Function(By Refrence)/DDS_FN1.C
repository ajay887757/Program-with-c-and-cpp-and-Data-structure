//WAF To Sort list of names of 10 students
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
     {
     char list[10][20] ;
     int i;
     void sort(char (*)[20] ,int );
     clrscr();
     printf("\n Enter 10 Names ");
     for( i=0 ; i<10 ; i++ )
	gets(list[i]);
     sort(list ,10);
     printf("\n After Sorting ");
     for( i=0 ; i<10 ; i++ )
	puts( list[i] );
     getch();
     }
void sort( char (*p)[20] ,int n)
     {
     int i , j ;
     char t[20];
     for( i=0 ; i<n-1 ; i++)
	{
	for (j=i+1 ; j<n ; j++ )
	    {
	    if( strcmp(p[i],p[j]) >0 )
	      {
	      strcpy(t,p[i]);
	      strcpy(p[i],p[j]);
	      strcpy(p[j],t);
	      }
	    }
	}
     }
