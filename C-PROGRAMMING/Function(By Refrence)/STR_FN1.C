//WAF to find out length of string and reverse it using fn
#include<stdio.h>
#include<
void main( )
     {
     char s1[20] ;
     void len_rev(char *);
     printf("\n Enter String ");
     gets(s1);
     len_rev(s1);
     puts(s1);
     }
void len_rev(char *p)
         { char *q=p,ch;
				while(*p != '\0')
							p++;
            printf("\n Length= %d",p-q );
            p--;
            for( ; p>q ; p-- , q++)
                { ch=*p ; *p=*q ; *q=ch ; }
          }  

