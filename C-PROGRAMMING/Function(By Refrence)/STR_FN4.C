//WAF to compare two strings using fn ( alphabetically )
#include<stdio.h>
#include<conio.h>
void main( )
    {
    char s1[20] , s2[20] ;
    int x;
	 int compare(char * , char *);
	 clrscr();
	 printf("\n Enter Strings s1 and s2 ");
	 gets(s1);
	 gets(s2) ;
	 x=compare(s1,s2);
	 if(x>0)
		 printf("\n s1 is big ");
	 else if(x<0)
		 printf("\n s2 is big ");
	 else
		 printf("\n Both are equal ");
	 getch();
	 }
int compare(char *p , char *q)
	  {
	  for(; *p!='\0'|| *q!='\0'; p++,q++)
		 {
		 if(*p != *q)
		 return *p - *q ;
		 }
	  return 0;
	  }
