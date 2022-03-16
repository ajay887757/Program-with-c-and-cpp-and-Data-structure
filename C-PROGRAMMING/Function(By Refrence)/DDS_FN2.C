//WAF To Search a name in list of names of 10 students using fn
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
     {
     char list[10][20],se[20] ;
     int i,pos;
     int sort(char (*)[20] ,char *,int );
     clrscr();
     printf("\n Enter 10 Names ");
     for( i=0 ; i<10 ; i++ )
	gets(list[i]);
     printf("\n Enter Searching Name ");
     gets(se);
     pos=search(list ,se,10);
     if(pos==0)
	printf("\n Not found ");
     else
	printf("\n Found and position = %d",pos);
     getch();
     }
int search( char (*p)[20] ,char *q,int n)
     {
     int i ;
     for( i=0 ; i<n-1 ; i++)
	{
	if( strcmp(p[i],q)==0 )
	   return i+1;
	}
     return 0;
     }
