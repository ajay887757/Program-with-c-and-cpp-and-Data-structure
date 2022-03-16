//WAP to check string is palindrom or not using fn
#include<stdio.h>
#include<conio.h>
void main( )
	  {
	  char s1[20] ;
	  int palin(char *);
	  clrscr();
	  printf("\n Enter String ");
	  gets(s1);
	  if( palin(s1) )
		 printf("\n String Is Palindrom ");
	  else
		 printf("\n String Is not Palindrom ");
	  getch();
	  }
int palin(char *p)
	 {
	 char *q=p,ch;
	 while(*p != '\0')
	 p++;
	 p--;
	 for( ; p>q ; p-- , q++)
		 {
		 if (*p != *q)
			return 0;
		 }
	 return 1;
	 }
