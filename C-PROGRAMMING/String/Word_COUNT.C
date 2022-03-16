//WAP to Count Number of Words in a String
#include<stdio.h>
#include<conio.h>
void main()
{
  char str[50];
  int i=0,wc;
  clrscr();
  printf("\nEnter a string:");
  gets(str);
  if(str[i]==' ')
	 wc=0;
  else
	 wc=1;
  while(str[i]!='\0')
  {
	 if(str[i]==' '&&str[i+1]!=' ')
		wc++;
	 i++;
  }
  printf("\nTotal no of words=%d",wc);
  getch();
}