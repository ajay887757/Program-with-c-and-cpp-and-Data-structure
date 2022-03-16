//WAF to convert string in uppercase using fn
#include<stdio.h>
#include<conio.h>
void main( )
    {
    char s1[20]  ;
    void  upper(char * );
    clrscr();
    printf("\n Enter String in lower case : ");
    gets(s1);
    upper( s1 );
    puts(s1);
    getch();
    }
void upper(char *p )
     {
	  while(*p != '\0')
		 {
		 if(*p>=97 && *p<=122)
		 *p=(*p)-32;
		 p++;
		 }
     }


