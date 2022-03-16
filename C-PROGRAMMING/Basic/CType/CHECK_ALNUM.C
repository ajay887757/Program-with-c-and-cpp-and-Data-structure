#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char ch;
clrscr();
printf("enter any char");
scanf("%c",&ch);
if(isupper(ch))
printf("char is in upper case");
else
printf("char is not in upper case");
}

