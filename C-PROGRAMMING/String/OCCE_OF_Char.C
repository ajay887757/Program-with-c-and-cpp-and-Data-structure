//WAP to count Occurance of a Character in a String
#include<stdio.h>
#include<conio.h>
void main()
{
  char str[30],ch;
  int i=0,c=0;
  clrscr();
  printf("\nEnter a string:");
  gets(str);
  printf("\n enter any char");
  scanf("%c",&ch);
  for( ;str[i]!='\0';i++)
  {
	 if(ch==str[i])
		c++;
  }
  printf("occrence of char=%d",c);
  getch();
}