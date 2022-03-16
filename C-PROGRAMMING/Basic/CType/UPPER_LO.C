#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char ch;
clrscr();
printf("enter any char");
scanf("%c",&ch);
ch=tolower(ch);
printf("lower case=%c",ch);
}

