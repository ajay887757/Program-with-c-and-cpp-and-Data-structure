//WAP to get the value of string and print it using pointer
#include<stdio.h>
#include<conio.h>
void main( )
       {
       char s1[20],*p ;
       p=s1;
       clrscr();
       printf("\n Enter String :");
       gets(p);
       puts(p);
       getch();
       }
