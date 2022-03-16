//WAF to convert string in lowercase using fn
#include<stdio.h>
#include<conio.h>
void main( )
    {
    char s1[20]  ;
    void  lower(char * );
    clrscr();
    printf("\n Enter String in upper case : ");
    gets(s1);
    lower( s1 );
    puts(s1);
    getch();
    }
void lower(char *p )
     {
     while(*p != '\0')
	{
	if(*p>=65 && *p<=90)
	  *p=(*p)+32;
	p++;
	}
     }


