#include<stdio.h>
#include<conio.h>
void main()
{
char str[30];
int i=0;
clrscr();

printf("\nEnter youre name:");
gets(str);
while(str[i]!='\0')
{
  if(str[i]>=65&&str[i]<=90)
    str[i]+=32;
  i++;
}
printf("\nNow str=%s",str);
}