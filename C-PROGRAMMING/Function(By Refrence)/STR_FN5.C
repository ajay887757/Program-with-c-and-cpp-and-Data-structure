//WAF to return no of vowels using fn
#include<stdio.h>
#include<conio.h>
void main( )
    {
    char s1[20] ;
    int vowels(char *);
    printf("\n Enter String ");
    gets(s1);
    printf("\nNo Of Vowels = %d ", vowels(s1) );
    }
int vowels(char *p)
    {
    char ch;
    int c=0 ;
    while(*p != '\0')
		{
		ch=tolower(*p);
		if(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u')
		  c++;
		p++;
		}
    return c;
    }

