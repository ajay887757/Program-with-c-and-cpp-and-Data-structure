//WAF to copy one string into another string
#include<stdio.h>
#include<conio.h>
void main( )
	  {
	  char s1[20] , s2[20] ;
	  void   copy(char * , char *);
	  clrscr();
	  printf("\n Enter Strings s1 and s2 ");
	  gets(s1);
	  gets(s2) ;
	  puts(s1);
	  puts(s2);
	  copy( s1, s2);//call of fn
	  puts(s1);
	  puts(s2);
	  }
void copy(char *p , char *q)
	  {
	  while( *q != '\0')
		 {
		 *p= *q ;
		 p++ ;
		 q++ ;
		 }
     *p='\0';
     }

