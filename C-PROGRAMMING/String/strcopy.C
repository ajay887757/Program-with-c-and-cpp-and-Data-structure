//WAP to copy a String into another
#include<stdio.h>
#include<conio.h>
void main()
{
  int i=0,j=0;
  char str1[30],str2[15];
  clrscr();
  printf("\nEnter two string:");
  gets(str1);
  gets(str2);
  while(str2[j]!='\0')
  {
	 str1[i]=str2[j];
	 i++;
	 j++;
  }
  str1[i]='\0';
  puts(str1);
  puts(str2);
  getch();
}