//WAF to convert string in Initially capital string using fn
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main( )
	 {
	 char s1[20]  ;
	 void  init_cap(char * );
	 clrscr();
	 printf("\n Enter Any String : ");
	 gets(s1);
	 init_cap( s1 );
	 puts(s1);
	 getch();
	 }
void init_cap(char *p )
{
	if(islower(*p))
     *p=*p-32;
	while(*p != '\0')
	{
	  if(*p==32 &&*(p+1)!=32)
	  {
		 if(islower(*(p+1)))
			*(p+1)= *(p+1)-32;
	  }
	  else
	  {
		  if(isupper(*(p+1)))
			*(p+1)=*(p+1)+32;
	  }
	  p++;
	}
}
