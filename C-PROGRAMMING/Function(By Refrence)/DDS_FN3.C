//WAF To find out biggest name(alphabetically)in list  using fn
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
     {
     char list[10][20],se[20] ;
     int i,pos;
     int biggest(char (*)[20],int );
     clrscr();
     printf("\n Enter 10 Names ");
     for( i=0 ; i<10 ; i++ )
	gets(list[i]);
     pos=biggest(list ,10);
     printf("\n Biggest name = %s and position = %d",list[pos-1],pos);
     getch();
     }
int biggest( char (*p)[20] ,int n)
     {
     int i ,pos=0;
     char t[20]="";
     for( i=0 ; i<n-1 ; i++)
	{
	if( strcmp(p[i],t)>0 )
	    {
	    strcpy(t,p[i]);
	    pos=i+1;
	    }
	}
     return pos;
     }
