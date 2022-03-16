//WAF to concat two strings using fn
#include<stdio.h>
#include<conio.h>
void main( )
    {
    char s1[20] , s2[20] ;
    int x;
    void  concat(char * , char *);
    clrscr();
    printf("\n Enter Strings s1 and s2 ");
    gets(s1);
    gets(s2) ;
    concat( s1 ,s2 );
    printf("\n Concated String :");
    puts(s1);
    getch();
    }
void  concat(char *p , char *q)
     {
     while(*p!='\0')
	   p++;
     while(*q!='\0')
	  {
	  *p=*q;
	  p++;
	  q++;
	  }
     *p='\0';
     }


